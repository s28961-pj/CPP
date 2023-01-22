#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <stdlib.h>

using namespace std;

// GoToXY(x,y) - pozycjonowanie kursora
void GoToXY(int x,int y)
{
    // Create a COORD structure and fill in its members.
    // This specifies the new position of the cursor that we will set.
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

    cout << "Wybierz jeden ze znakow ASCII i podaj odpowiadajacy mu numer: ";
    cin >> znak;

    // kod ASCII 32 - znak spacji
    // kod ASCII 127 - klawisz Delete

    return znak;
}

// EnterSize() - wczytuje i zwraca rozmiar figury
int EnterSize() {
	int rozmiar;

    do
	{
        cout << "Podaj rozmiar figury (3-15): ";
		cin >> rozmiar;
	}
    while(rozmiar < 3 || rozmiar > 20); // min - 3 zeby narysowac "X", max - 20

    return rozmiar;
}

// PrintPattern() - drukuje w konsoli litere X z wybranego znaku ASCII i wybranym rozmiarze
void PrintPattern(int n, int znak)
{
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // For i = 1, we print a 'znak' only in
            // first and last columns
            // For i = 2, we print a 'znak' only in
            // second and second last columns
            // In general, we print a 'znak' only in
            // i-th and n+1-i th columns

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

    WelcomeText();

    znak = ChooseASCII();
    rozmiar = EnterSize();
    x = WhereX();
    y = WhereY();

    cout << znak << " == \"" << (char)(znak) << "\"" << endl;
    cout << rozmiar << endl;
    cout << "x: " << x;
    cout << "y: " << y;

    PrintPattern(rozmiar, znak);
    GoToXY(0, 0);

    cout << "znak: " << znak;
    cout << "rozmiar: " << rozmiar;
    cout << "x: " << x;
    cout << "y: " << y;
    cout << x << " " << y << endl;

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
