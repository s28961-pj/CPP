#include <iostream>

using namespace std;

int main() {
    cout << "\nPORÓWNAJ DWIE DATY.\n" << endl;
    cout << "-----------------------" << endl;

    int dzien1, miesiac1, rok1, dzien2, miesiac2, rok2;
    // Walidacja daty nr 1
    do {    // Pętla warunkowa DO WHILE wykona polecenia przynajmniej raz, po czym sprawdzi warunek i jesli true powtorzy petle
        cout << "Podaj dzien 1: ";
        cin >> dzien1;
        if ( dzien1 > 31 || dzien1 < 1 ) cout << "Miesiąc ma maksymalnie 31 dni. Sprobuj ponownie..." << endl;
    } while ( dzien1 > 31 || dzien1 < 1 );

    do {
        cout << "Podaj miesiac 1: ";
        cin >> miesiac1;
        if ( miesiac1 > 12 || miesiac1 < 1 ) cout << "Rok ma maksymalnie 12 miesięcy. Sprobuj ponownie..." << endl;
    } while ( miesiac1 > 12 || miesiac1 < 1 );

    do {
        cout << "Podaj rok 1: ";
        cin >> rok1;
        if ( rok1 > 2023 || rok1 < 1 ) cout << "Liczymy lata Naszej Ery. Sproboj ponownie..." << endl;
    } while ( rok1 > 2023 || rok1 < 1 );

    // Walidacja daty nr 2
    do {
        cout << "Podaj dzien 2: ";
        cin >> dzien2;
        if ( dzien2 > 31 || dzien2 < 1 ) cout << "Miesiąc ma maksymalnie 31 dni. Sprobuj ponownie..." << endl;
    } while ( dzien2 > 31 || dzien2 < 1 );

    do {
        cout << "Podaj miesiac 2: ";
        cin >> miesiac2;
        if ( miesiac2 > 12 || miesiac2 < 1 ) cout << "Rok ma maksymalnie 12 miesięcy. Sprobuj ponownie..." << endl;
    } while ( miesiac2 > 12 || miesiac2 < 1 );

    do {
        cout << "Podaj rok 2: ";
        cin >> rok2;
        if ( rok2 > 2023 || rok2 < 1 ) cout << "Liczymy lata Naszej Ery. Sproboj ponownie..." << endl;
    } while ( rok2 > 2022 || rok2 < 1 );

    cout << dzien1 << "." << miesiac1 << "." << rok1 << " r. " << endl;
    cout << dzien2 << "." << miesiac2 << "." << rok2 << " r. " << endl;
    
    return 0;
}