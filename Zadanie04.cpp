#include <iostream>

using namespace std;

int main() {

    int number1, number2, number3, wynik;

    cout << "Program wyznaczający najmniejszą z trzech liczb podanych przez użytkownika..\n";
    cout << "Wprowadz liczbe nr 1: ";
    cin >> number1;
    cout << "Wprowadz liczbe nr 2: ";
    cin >> number2;
    cout << "Wprowadz liczbe nr 3: ";
    cin >> number3;
    wynik = min( min( number1, number2 ), number3 );
    cout << wynik;

    return 0;
}