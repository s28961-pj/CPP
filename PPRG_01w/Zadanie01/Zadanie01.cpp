#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int a, wynik;

    cout << "-------------------------------" << endl;
    cout << "      WARTOŚĆ BEZWZGLĘDNA" << endl;
    cout << "-------------------------------" << endl;

    cout << "Wprowadź liczbę: ";
    cin >> a;
    wynik = a > 0 ? a : -a;
    // wynik = abs(liczba); // Funkcja wartość bezwzględna z liczby <cmath>
    cout << "\nWartość bezwzględna z " << a << " to: " << wynik << endl;

    return 0;
};
