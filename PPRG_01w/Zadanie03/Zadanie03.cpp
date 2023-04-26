#include <iostream>

using namespace std;

int main() {

    int liczba;

    cout << "------------------------------" << endl;
    cout << "  PARZYSTA CZY NIEPARZYSTA ?" << endl;
    cout << "------------------------------" << endl;
    
    cout << "Wprowadz liczbe: ";
    cin >> liczba;
    if ( liczba == 0 ) {
        cout << "\nPodana liczba wynosi 0." << endl;
    } else if ( liczba % 2 == 0 ) {
        cout << "\nPodana liczba jest parzysta." << endl;
    } else {
        cout << "\nPodana liczba jest nieparzysta." << endl;
    };

    return 0;
}