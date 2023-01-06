#include <iostream>

using namespace std;

int main() {
    int a, silnia1 = 1, silnia2 = 1, silnia3 = 1;

    cout << "Wprowadz calkowita liczbe nieujemna: ";
    cin >> a;

    if ( a < 0 ) {
        cout << "Błedna wartosc. Podana liczba jest ujemna. ";
        return 1;
    }

    for (int i = 1; i <= a; i++)
    {
        silnia1 *= i;
    };
    
    int j = 1;
    while ( j <= a )
    {
        silnia2 *= j;
        j++;
    }

    int k = 1;
    do
    {
        silnia3 *= k;
        k++;
    } while ( k <= a );

    cout << "FOR - Wartosc " << a << "! wynosi " << silnia1 << endl;
    cout << "WHILE - Wartosc " << a << "! wynosi " << silnia2 << endl;
    cout << "DO-WHILE - Wartosc " << a << "! wynosi " << silnia3 << endl;

    return 0;
}