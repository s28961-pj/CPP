#include <iostream>

using namespace std;

int main() {

    int number;

    cout << "\nProgram sprawdzający czy liczba podana przez użytkownika jest z przedziału <1,10> lub <17,21>.\n" << endl;
    cout << "Wprowadz liczbe nr 1: ";
    cin >> number;
    if (( number >= 1 && number <= 10 ) || ( number >= 17 && number <= 21 )) {
        cout << "Podana liczba nalezy do przedziału <1,10> lub <17,21> ";
    } else cout << "Podana liczba NIE nalezy do przedziału <1,10> lub <17,21> ";

    return 0;
}