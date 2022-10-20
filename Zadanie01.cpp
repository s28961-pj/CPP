#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int liczba, wynik;

    cout << "\nProgram zwracający wartość bezwzględną liczby podanej przez użytkownika.\n" << endl;
    cout << "Wprowadź liczbę: ";
    cin >> liczba;
    wynik = abs(liczba); // Funkcja wartość bezwzględna z liczby <cmath>
    cout << "\nWartość bezwzględna liczby " << liczba << " to: " << wynik << endl;

    return 0;
};
