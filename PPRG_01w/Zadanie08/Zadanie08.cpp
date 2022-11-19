#include <iostream>

using namespace std;

int main() {

    int dzien1, miesiac1, rok1, dzien2, miesiac2, rok2;

    cout << "\nProgram, który porówna dwie daty.\nDaty są podane za pomocą wartości trzech zmiennych: \n- dzien1, miesiac1, rok1 dla pierwszej daty i \n- dzien2, miesiac2, rok2 dla drugiej daty.\n" << endl;
    
    // Walidacja daty nr 1
    do {    // Pętla warunkowa DO WHILE wykona polecenia przynajmniej raz, po czym sprawdzi warunek i jesli true powtorzy petle
        cout << "Podaj dzien 1: ";
        cin >> dzien1;
    } while ( dzien1 > 31 || dzien1 < 1 );

    do {
        cout << "Podaj miesiac 1: ";
        cin >> miesiac1;
    } while ( miesiac1 > 12 || miesiac1 < 1 );

    do {
        cout << "Podaj rok 1: ";
        cin >> rok1;
    } while ( rok1 > 2022 || rok1 < 1 );

    // Walidacja daty nr 2
    do {
        cout << "Podaj dzien 2: ";
        cin >> dzien2;
    } while ( dzien2 > 31 || dzien2 < 1 );

    do {
        cout << "Podaj miesiac 2: ";
        cin >> miesiac2;
    } while ( miesiac2 > 12 || miesiac2 < 1 );

    do {
        cout << "Podaj rok 2: ";
        cin >> rok2;
    } while ( rok2 > 2022 || rok2 < 1 );

    cout << dzien1 << "." << miesiac1 << "." << rok1 << " r. " << endl;
    cout << dzien2 << "." << miesiac2 << "." << rok2 << " r. " << endl;
    
    return 0;
}