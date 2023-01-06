#include <iostream>

using namespace std;

int main() {

    float a, b, x;

    cout << "\nRÓWNANIE LINIOWE (ax + b = 0)" << endl;
    cout << "-------------------------------" << endl;

    cout << "Wprowadz a: ";
    cin >> a;

    cout << "Wprowadz b: ";
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