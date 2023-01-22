#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <stdlib.h>

using namespace std;

// GoToXY(x,y) - pozycjonowanie kursora
void GoToXY(int x,int y)
{
    // Tworzy strukture COORD i ja wypelnia.
    // Okresla nowa pozycje kursora
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
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
void ClearLine()
{
    // nie dziala ;(
	int x, y;
	x = WhereX();
	y = WhereY();
	GoToXY(x,y);
	for (int i =x; i<=79; i++)
		cout << " " << endl;
	GoToXY(x, y);
}

// HideCursor() - ukrycie kursora
void HideCursor()
{
	::HANDLE hConsoleOut = ::GetStdHandle( STD_OUTPUT_HANDLE );
	::CONSOLE_CURSOR_INFO hCCI;
	::GetConsoleCursorInfo( hConsoleOut, &hCCI );
	hCCI.bVisible = FALSE;
	::SetConsoleCursorInfo( hConsoleOut, &hCCI );
}

// WelcomeText() - wyswietla tekst powitalny uzytkownikowi
void WelcomeText() {
    cout << "---------------------------------------------------" << endl;
    cout << "-----------Witaj w programie IKS v0.1!-------------" << endl;
    cout << "--Bedziesz mial mozliwosc rysowania znakiem ASCII--" << endl;
    cout << "---------------------------------------------------" << endl;

}

// PrintASCII() - drukuje dostepne znaki ASCII i zwraca wybrany
int ChooseASCII() {
    int znak;

    cout << "---------------------------------------------------" << endl;
    cout << "------Ponizej przedstawiono znaki kodu ASCII:------" << endl;
    cout << "---------------------------------------------------" << endl;
    for ( int i = 32; i < 126; i += 4 ) {
        if (i < 100) {
            cout << "---| " << (char)(i) << " == " << i << "  | ";
            cout << (char)(i + 1) << " == " << i + 1 << "  | ";
            cout << (char)(i + 2) << " == " << i + 2 << "  | ";
            cout << (char)(i + 3) << " == " << i + 3 << "  |---" << endl;
        } else {
            cout << "---| " << (char)(i) << " == " << i << " | ";
            cout << (char)(i + 1) << " == " << i + 1 << " | ";
            cout << (char)(i + 2) << " == " << i + 2 << " | ";
            if (i+3 != 127) {
                cout << (char)(i + 3) << " == " << i + 3 << " |---" << endl;
            } else {
                cout << "  == 127 |---" << endl;
            }
        }
    };

    do {
        cout << "---------------------------------------------------" << endl;
        cout << "   Wybierz jeden ze znakow i podaj jego numer: ";
        cin >> znak;
        if (znak < 32 || znak > 127) {
            cout << "   Bledny znak, wybierz z przedzialu <32, 127>" << endl;
        }
    } while (znak < 32 || znak > 127);

    // kod ASCII 32 - znak spacji
    // kod ASCII 127 - klawisz Delete

    return znak;
}

// EnterSize() - wczytuje i zwraca rozmiar figury
int EnterSize() {
	int rozmiar;

    do
	{
        cout << "---------------------------------------------------" << endl;
        cout << "          Podaj rozmiar figury (3-20): ";
		cin >> rozmiar;
        if (rozmiar < 3 || rozmiar > 20) {
            cout << "       Podales zly rozmiar, sproboj ponownie." << endl;
        }
	}
    while(rozmiar < 3 || rozmiar > 20);

    return rozmiar;
}

// PrintPattern() - drukuje w konsoli litere X z wybranego znaku ASCII i wybranym rozmiarze
void PrintPattern(int n, int znak)
{
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Dla i = 1, drukujemy 'znak' tylko
            // w pierwszej i ostatniej kolumnie
            // Dla i = 2, drukujemy 'znak' tylko
            // za drugim i przedostatnim razem
            // Wlasciwie, drukujemy 'znak' w
            // kolumnach i oraz n+1-i

            if (j == i || j == (n + 1 - i))
                cout << (char)(znak);
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int x=0 , y=0;
    int znak, rozmiar;

    //MessageBox( NULL, "Dzien dobry!\nZa chwile zobaczysz interfejs w konsoli.", "Projekt zaliczeniowy", MB_OK);

    WelcomeText();

    znak = ChooseASCII();
    rozmiar = EnterSize();
    x = WhereX();
    y = WhereY();

    cout << "           Wybrales znak: " << znak << " czyli \"" << (char)(znak) << "\"" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    GoToXY(0, 0);
    PrintPattern(rozmiar, znak);
    GoToXY(0, 0);

    // while (true) {
    //     if (GetAsyncKeyState(VK_UP)) {
    //         y -= 10;
    //     } else if (GetAsyncKeyState(VK_DOWN)) {
    //         y += 10;
    //     } else if (GetAsyncKeyState(VK_RIGHT)) {
    //         x += 10;
    //     } else if (GetAsyncKeyState(VK_LEFT)) {
    //         x -= 10;
    //     } else if (GetAsyncKeyState(VK_RETURN)) {
    //         break;
    //     }
    // }

    getch();

	return 0;
}
