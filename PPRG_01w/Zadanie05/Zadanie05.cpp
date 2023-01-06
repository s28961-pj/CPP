#include <iostream>

using namespace std;

int main()
{
    cout << "\nCZY WSRÓD TRZECH LICZB SĄ CHOĆ DWIE TAKIE SAME?\n"
         << endl;
    cout << "---------------------------------------------------" << endl;

    int number1, number2, number3;

    cout << "Wprowadz liczbe nr 1: ";
    cin >> number1;
    cout << "\nWprowadz liczbe nr 2: ";
    cin >> number2;
    cout << "\nWprowadz liczbe nr 3: ";
    cin >> number3;

    if (number1 == number2 && number1 == number3)
    { // Operator logiczny AND == &&, oba wyrazenia musza dać true
        cout << "\nWszystkie liczby są takie same." << endl;
    }
    else if (number1 == number2 || number1 == number3 || number2 == number3)
    { // Operator logiczny OR == ||, przynajmniej jedno wyrazenie musi dac true
        cout << "\nPrzynajmniej dwie z trzech są takie same." << endl;
    }
    else
    {
        cout << "\nKazda z liczb jest inna." << endl;
    };

    return 0;
}