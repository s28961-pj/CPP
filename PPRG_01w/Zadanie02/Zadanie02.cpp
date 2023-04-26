#include <iostream>

using namespace std;

int main() {

    int liczba;

    cout << "--------------------------------------" << endl;
    cout << "    Większa, mniejsza czy równa 0 ?" << endl;
    cout << "--------------------------------------" << endl;

    cout << "Podaj liczbę: ";
    cin >> liczba;
    if ( liczba > 0 ) { // Pierwsza instrukcja warunkowa if else
        cout << "\nPodana liczba jest większa od 0." << endl;
    } else if ( liczba < 0 ) { //Druga instrukcja warunkowa if else
        cout << "\nPodana liczba jest mniejsza od 0" << endl;
    } else cout << "\nPodana liczba jest równa 0" << endl;

    return 0;
};
