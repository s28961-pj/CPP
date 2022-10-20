#include <iostream>

using namespace std;

int main() {

    int liczba;

    cout << "\nProgram informujący czy liczba podana przez użytkownika jest większa, mniejsza czy równa zero.\n" << endl;
    cout << "Podaj liczbę: ";
    cin >> liczba;
    if ( liczba > 0 ) { // Pierwsza instrukcja warunkowa if else
        cout << "\nPodana liczba jest większa od 0.";
    } else if ( liczba < 0 ) { //Druga instrukcja warunkowa if else
        cout << "\nPodana liczba jest mniejsza od 0";
    } else cout << "\nPodana liczba jest rowna 0" << endl;

    return 0;
};
