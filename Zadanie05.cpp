#include <iostream>

using namespace std;

int main() {

    int number1, number2, number3, wynik;

    cout << "Program, który odpowiada na pytanie, czy wśród trzech liczb są choć dwie takie same.\n";
    cout << "Wprowadz liczbe nr 1: ";
    cin >> number1;
    cout << "Wprowadz liczbe nr 2: ";
    cin >> number2;
    cout << "Wprowadz liczbe nr 3: ";
    cin >> number3;
    if ( number1 == number2 && number1 == number3 ) {
        cout << "Wszystkie liczby są takie same.\n";
    } else if ( number1 == number2 || number1 == number3 || number2 == number3 ) {
        cout << "Przynajmniej dwie wśrod trzech są takie same.";
    } else {
        cout << "Kazda z liczb jest inna.\n";
    };

    return 0;
}