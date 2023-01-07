#include <iostream>

using namespace std;

int main()
{

    int liczba1, liczba2, suma, reszta;

    cout << "\nSUMA LICZB - PARZYSTA CZY NIEPARZYSTA ?\n"
         << endl;
    cout << "------------------------------" << endl;

    cout << "Wprowadz pierwsza liczbe: ";
    cin >> liczba1;
    cin.ignore();

    cout << "Wprowadz druga liczbe: ";
    cin >> liczba2;
    cin.ignore();

    suma = liczba1 + liczba2;
    reszta = suma % 2;

    if ( reszta == 0 ) {
        cout << "Suma a + b jest parzysta." << endl;
    } else {
        cout << "Suma a + b jest nieparzysta." << endl;
    }

    return 0;
}