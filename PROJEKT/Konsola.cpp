#include <iostream>
#include <conio.h> // potrzebne do getch()
#include <Windows.h>
#include <string>
#include <stdlib.h>

using namespace std;

// PrintBackground() - drukuje tlo interfejsu
void PrintBackground() {

    HANDLE hOut = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute( hOut, FOREGROUND_INTENSITY );

    for (int i = 0; i < 30; i++)
    {
        cout << "---------------------------------------------------" << endl;
    }
}

// GoToXY(x,y) - pozycjonowanie kursora
void GoToXY(int x, int y)
{
    // Tworzy strukture COORD i ja wypelnia.
    // Okresla nowa pozycje kursora
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// WhereX() - okreslenie wspolrzednej X kursora
int WhereX()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    return csbi.dwCursorPosition.X;
}

// WhereY() - okreslenie wspolrzednej Y kursora
int WhereY()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    return csbi.dwCursorPosition.Y;
}

// ClearLine() - czyszczenie linii poczynajac od aktualnej pozycji kursora do konca linii - nie dziala
// void ClearLine()
// {
//     // nie dziala ;(
//     int x, y;
//     x = WhereX();
//     y = WhereY();
//     GoToXY(x, y);
//     for (int i = x; i <= 100; i++)
//         cout << " ";
//     GoToXY(x, y);
// }

// HideCursor() - ukrycie kursora
void HideCursor()
{
    ::HANDLE hConsoleOut = ::GetStdHandle(STD_OUTPUT_HANDLE);
    ::CONSOLE_CURSOR_INFO hCCI;
    ::GetConsoleCursorInfo(hConsoleOut, &hCCI);
    hCCI.bVisible = FALSE;
    ::SetConsoleCursorInfo(hConsoleOut, &hCCI);
}

// WelcomeText() - wyswietla tekst powitalny uzytkownikowi
void WelcomeText()
{
    HANDLE hOut = GetStdHandle( STD_OUTPUT_HANDLE );

    PrintBackground();
    GoToXY(11, 2);
    SetConsoleTextAttribute( hOut, FOREGROUND_BLUE );
    cout << " Witaj w programie IKS v0.2 " << endl;
    GoToXY(1, 4);
    cout << " Bedziesz mial mozliwosc rysowania znakiem ASCII " << endl;
    GoToXY(7, 7);
    cout << " Wcisnij dowolny klawisz zeby zaczac   ";
    GoToXY(44, 7);
    getch();
}

// PrintASCII() - drukuje dostepne znaki ASCII i zwraca wybrany
int ChooseASCII()
{
    int znak;

    GoToXY(0, 0);
    PrintBackground();
    GoToXY(0, 0);
    HANDLE hOut = GetStdHandle( STD_OUTPUT_HANDLE );

    GoToXY(5, 1);
    SetConsoleTextAttribute( hOut, FOREGROUND_BLUE );
    cout << " Ponizej przedstawiono znaki kodu ASCII: " << endl;
    SetConsoleTextAttribute( hOut, FOREGROUND_INTENSITY );
    GoToXY(0, 3);

    for (int i = 32; i < 126; i += 4)
    {
        if (i < 100)
        {
            cout << "---| " << (char)(i) << " == " << i << "  | ";
            cout << (char)(i + 1) << " == " << i + 1 << "  | ";
            cout << (char)(i + 2) << " == " << i + 2 << "  | ";
            cout << (char)(i + 3) << " == " << i + 3 << "  |---" << endl;
        }
        else
        {
            cout << "---| " << (char)(i) << " == " << i << " | ";
            cout << (char)(i + 1) << " == " << i + 1 << " | ";
            cout << (char)(i + 2) << " == " << i + 2 << " | ";
            if (i + 3 != 127)
            {
                cout << (char)(i + 3) << " == " << i + 3 << " |---" << endl;
            }
            else
            {
                cout << "  == 127 |---" << endl;
            }
        }
    };

    do
    {
        GoToXY(2, 28);
        SetConsoleTextAttribute( hOut, FOREGROUND_BLUE );
        cout << " Wybierz jeden ze znakow i podaj jego numer:   ";
        GoToXY(47, 28);
        cin >> znak;
    } while (znak < 32 || znak > 127);

    // kod ASCII 32 - znak spacji
    // kod ASCII 127 - klawisz Delete

    return znak;
}

// EnterSize() - wczytuje i zwraca rozmiar figury
int EnterSize()
{
    int rozmiar;
    HANDLE hOut = GetStdHandle( STD_OUTPUT_HANDLE );
    GoToXY(0, 0);
    PrintBackground();
    do
    {
        GoToXY(9, 2);
        SetConsoleTextAttribute( hOut, FOREGROUND_BLUE );
        cout << " Podaj rozmiar figury od 3 do 20:   ";
        GoToXY(43, 2);
        cin >> rozmiar;
        if (rozmiar < 3 || rozmiar > 20)
        {
            GoToXY(5, 4);
            cout << " Podales zly rozmiar, sproboj ponownie." << endl;
        }
    } while (rozmiar < 3 || rozmiar > 20);

    return rozmiar;
}

// PrintPattern() - drukuje w konsoli litere X z wybranego znaku ASCII i wybranym rozmiarze
void PrintPattern(int rozmiar, int znak)
{
    HANDLE hOut = GetStdHandle( STD_OUTPUT_HANDLE );
    for (int i = 1; i <= rozmiar; i++)
    {
        for (int j = 1; j <= rozmiar; j++)
        {
            // Dla i = 1, drukujemy 'znak' tylko
            // w pierwszej i ostatniej kolumnie
            // Dla i = 2, drukujemy 'znak' tylko
            // za drugim i przedostatnim razem
            // Wlasciwie, drukujemy 'znak' w
            // kolumnach i oraz n+1-i

            if (j == i || j == (rozmiar + 1 - i)) {
                SetConsoleTextAttribute( hOut, FOREGROUND_GREEN );
                cout << (char)(znak);
            }
            else {
                SetConsoleTextAttribute( hOut, FOREGROUND_INTENSITY );
                cout << "-";
            }
        }
        cout << endl;
    }
}

// MoveIt() - przesuwa figure za pomoca strzalek
void MoveIt(int rozmiar, int x, int y, int znak)
{
    int button;

    GoToXY(0, 0);
    PrintBackground();
    GoToXY(0, 0);
    PrintPattern(rozmiar, znak);
    HideCursor();
    do
    {
        button = getch();
        GoToXY(0, 0);
        PrintBackground();

        if (button == 115 || button == 83)
        { // button 's' - down
            if ( (y + rozmiar) < 30 ) { // granica dolna interfejsu
                y++;
            }
            GoToXY(x, y);
            PrintPattern(rozmiar, znak);
        }
        if (button == 119 || button == 87)
        { // button 'w' - up
            if (y > 0) { // granica gorna interfejsu
                y--;
            }
            GoToXY(x, y);
            PrintPattern(rozmiar, znak);
        }
        if (button == 97 || button == 65)
        { // button 'a' - left
            if (x > 0) { // granica lewa interfejsu
                x--;
            }
            GoToXY(x, y);
            PrintPattern(rozmiar, znak);
        }
        if (button == 100 || button == 68)
        { // button 'd' - right
            if ((x + rozmiar) < 51) { // granica prawa interfejsu
                x++;
            }
            GoToXY(x, y);
            PrintPattern(rozmiar, znak);
        }
        if (button == 43)
        { // button '+' - zwieksza figure o 1
            GoToXY(x, y);
            if (rozmiar < 20)
            {
                rozmiar++;
            }
            PrintPattern(rozmiar, znak);
        }
        if (button == 45)
        { // button '-' - zmniejsza figure o 1
            GoToXY(x, y);
            if (rozmiar > 3)
            {
                rozmiar--;
            }
            PrintPattern(rozmiar, znak);
        }

    } while (button != 104);
}

int main()
{
    int x, y, znak, rozmiar;
    //MessageBox(NULL, "Dzien dobry!\nZa chwile zobaczysz interfejs w konsoli.", "Projekt zaliczeniowy", MB_OK);

    WelcomeText();

    znak = ChooseASCII();
    rozmiar = EnterSize();

    MoveIt(rozmiar, 0, 0, znak);

    return 0;
}
