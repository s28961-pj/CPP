#include <iostream>
#include <string.h>

using namespace std;

int main() {

    int Num1, Num2, Num3, Num4, Num5;
    string errorMessage = "Podana liczba jest mniejsza lub rowna poprzedniej.";

    cout << "Podaj liczbe nr 1: ";
    cin >> Num1;
    cout << "Podaj liczbe nr 2: ";
    cin >> Num2;
    if ( Num2 <= Num1 ) {
        cout << errorMessage << endl;
        return 0;
    };
    cout << "Podaj liczbe nr 3: ";
    cin >> Num3;
    if ( Num3 <= Num2 ) {
        cout << errorMessage << endl;
        return 0;
    };
    cout << "Podaj liczbe nr 4: ";
    cin >> Num4;
    if ( Num4 <= Num3 ) {
        cout << errorMessage << endl;
        return 0;
    }
    cout << "Podaj liczbe nr 5: ";
    cin >> Num5;
    if ( Num5 <= Num4 ) {
        cout << errorMessage << endl;
        return 0;
    };

    return 0;
    
};