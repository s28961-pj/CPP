#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int liczba, wynik;

    cout << "Program zwracający wartość bezwzględną liczby podanej przez użytkownika.\n";
    cout << "Wprowadź liczbę: ";
    cin >> liczba;
    wynik = abs(liczba);
    cout << "Wartość bezwzględna liczby " << liczba << " to: " << wynik;

    return 0;
};
