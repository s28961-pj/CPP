#include <iostream>

using namespace std;

int main() {

    int liczba;

    cout << "\nPARZYSTA CZY NIEPARZYSTA ?\n" << endl;
    cout << "------------------------------" << endl;
    
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