#include <iostream>

using namespace std;

int main() {

    int a, b, x;

    cout << "Program podaje rozwiazanie rownania liniowego ax + b = 0 " << endl;
    cout << "Wprowadz parametr a: ";
    cin >> a;

    cout << "Wprowadz parametr b: ";
    cin >> b;

    if (a == 0) {
        if (b == 0) {
            cout << "Rownanie spelnia kazda liczba rzeczywista." << endl;
        } else {
            cout << "Rownanie nie posiada rozwiazan." << endl;
        }
    } else {
        x = -b / a;
        cout << "x = " << x << endl;
    }

    return 0;
}