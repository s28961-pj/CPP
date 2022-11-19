#include <iostream>

using namespace std;

int main() {

    int liczba;

    cout << "\nProgram informujący czy liczba podana przez użytkownika jest parzysta czy nieparzysta.\n" << endl;
    cout << "Wprowadz liczbe: ";
    cin >> liczba;
    if ( liczba == 0 ) {
        cout << "\nPodana liczba wynosi 0.";
    } else if ( liczba % 2 == 0 ) {
        cout << "\nPodana liczba jest parzysta.";
    } else {
        cout << "\nPodana liczba jest nieparzysta.";
    };

    return 0;
}