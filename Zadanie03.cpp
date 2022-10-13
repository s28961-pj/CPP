#include <iostream>

using namespace std;

int main() {

    int liczba;

    cout << "Program informujący czy liczba podana przez użytkownika jest parzysta czy nieparzysta.\n";
    cout << "Wprowadz liczbe: ";
    cin >> liczba;
    if ( liczba == 0 ) {
        cout << "Podana liczba wynosi 0.";
    } else if ( liczba % 2 == 0 ) {
        cout << "Podana liczba jest parzysta.";
    } else {
        cout << "Podana liczba jest nieparzysta.";
    };

    return 0;
}