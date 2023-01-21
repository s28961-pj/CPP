#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <stdlib.h>

using namespace std;

// GoToXY(x,y) - pozycjonowanie kursora
void GoToXY(int x,int y)
{
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

// ClearLine() - czyszczenie linii poczynajac od aktualnej pozycji kursora do konca linii
void ClearLine()
{
	int x, y;
	x = WhereX();
	y = WhereY();
	GoToXY(x,y);
	for (int i =x; i<=79; i++)
		cout << " " << endl;
	GoToXY(x, y);
}

// HideCursor() - ukrycie kursora
// void HideCursor()
// {
// 	::HANDLE hConsoleOut = ::GetStdHandle( STD_OUTPUT_HANDLE );
// 	::CONSOLE_CURSOR_INFO hCCI;
// 	::GetConsoleCursorInfo( hConsoleOut, &hCCI );
// 	hCCI.bVisible = FALSE;
// 	::SetConsoleCursorInfo( hConsoleOut, &hCCI );
// }

// WelcomeText() - wyswietla tekst powitalny uzytkownikowi
void WelcomeText() {
    cout << "---------------------------------------------------" << endl;
    cout << "-----------Witaj w programie IKS v0.1!-------------" << endl;
    cout << "--Bedziesz mial mozliwosc rysowania znakiem ASCII--" << endl;
    cout << "---------------------------------------------------" << endl;

}

// PrintASCII() - drukuje w konsoli dostepne znaki ASCII
void PrintASCII() {
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
    cout << "---------------------------------------------------" << endl;

    // kod ASCII 32 - znak spacji
    // kod ASCII 127 - klawisz Delete
}

// EnterSize() - wczytuje i zwraca rozmiar figury
int EnterSize() {
	int rozmiar, x, y, err = 0;

	cout << "Podaj rozmiar figury (3-15): ";
	x = WhereX();
	y = WhereY();

    do
	{
        err = 0;
		GoToXY(x, y);
		ClearLine();
		cin >> rozmiar;

        if (!cin.good())  // Zabezpieczenie przed wprowadzeniem niewlasciwego znaku
        {
            err = 1;
			cin.clear();
            cin.ignore(80, '\n');
        }
	}
    while(rozmiar < 3 || rozmiar > 15 || err);

    return rozmiar;
}

int main()
{
    int znak, rozmiar;

    WelcomeText();
    PrintASCII();

    cout << "Wybierz jeden ze znakow ASCII i podaj odpowiadajacy mu numer: ";
    cin >> znak;
    cout << znak << " == \"" << (char)(znak) << "\"" << endl;

    rozmiar = EnterSize();
    cout << rozmiar << endl;
    system("cls");
    getch();

	return 0;
}
