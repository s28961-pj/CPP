#include <iostream>

using namespace std;

int main()
{

    int number1, number2, number3, wynik;

    cout << "\nProgram wyznaczający najmniejszą z trzech liczb podanych przez użytkownika.\n"
         << endl;
    cout << "Wprowadz liczbe nr 1: ";
    cin >> number1;
    cout << "\nWprowadz liczbe nr 2: ";
    cin >> number2;
    cout << "\nWprowadz liczbe nr 3: ";
    cin >> number3;
    if (number1 == number2 && number2 == number3)
    {
        cout << "Wszystkie podane liczby są identyczne." << endl;
    }
    else
    {
        wynik = min(min(number1, number2), number3); // Funkcja min(a, b) porownuje 2 parametry i zwraca mniejsza wartosc
        cout << "\nNajmniejsza z 3 podanych liczb to: " << wynik << endl;
    }

    return 0;
}