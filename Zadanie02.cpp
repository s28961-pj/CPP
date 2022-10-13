#include <iostream>

using namespace std;

int main() {

    int liczba;

    cout << "Program informujący czy liczba podana przez użytkownika jest większa, mniejsza czy równa zero.\n";
    cout << "Podaj liczbę: ";
    cin >> liczba;
    if ( liczba > 0 ) { // Pierwsza funkcja warunkowa
        cout << "Podana liczba jest większa od 0.";
    } else if ( liczba < 0 ) { //Druga funkcja warunkowa
        cout << "Podana liczba jest mniejsza od 0";
    } else cout << "Podana liczba jest rowna 0";

    return 0;
};
