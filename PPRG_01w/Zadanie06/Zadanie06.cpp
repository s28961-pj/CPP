#include <iostream>

using namespace std;

int main() {

    int number1, number2, number3;

    cout << "\nProgram, który odpowiada na pytanie, czy trzy podane liczby całkowite są ustawione w porządku rosnącym.\n" << endl;
    cout << "Wprowadz liczbe całkowitą nr 1: ";
    cin >> number1;
    cout << "\nWprowadz liczbe całkowitą nr 2: ";
    cin >> number2;
    cout << "\nWprowadz liczbe całkowitą nr 3: ";
    cin >> number3;
    if ( number1 == number2 && number2 == number3 ) {
        cout << "\nPodane liczby są rowne.\n";
    } else if ( number1 < number2 && number2 < number3 ) {
        cout << "\nPodane liczby są ustawione w porządku rosnącym.\n";
    } else if ( number1 > number2 && number2 > number3 ) {
        cout << "\nPodane liczby są ustawione w porządku malejącym.\n";
    } else cout << "\nNiestety podane liczby nie są ustawione w zadnym porządku.\n";

    return 0;
}