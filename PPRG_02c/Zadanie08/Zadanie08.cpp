#include <iostream>

using namespace std;

int main()
{
    int szerokosc, dlugosc;

    cout << "Podaj szerokosc prostokata: ";
    cin >> szerokosc;
    cout << "Podaj dlugosc prostokata: ";
    cin >> dlugosc;
    cin.ignore();

    if (szerokosc <= 0 || dlugosc <= 0)
    {
        return 1;
    };

    for (int i = 0; i < dlugosc; i++)
    {
        for (int j = 0; j < szerokosc; j++)
        {
            cout << "#";
        };
        cout << endl;
    }

    return 0;
}