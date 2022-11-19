#include <iostream>

using namespace std;

int main()
{
    int a, b;
    
    cout << "Wprowadz liczbe 1: ";
    cin >> a;
    cout << "Wprowadz liczbe 2: ";
    cin >> b;
    if ( a > b ) {
        cout << a << " jest większe od " << b << endl;
    } else if ( a < b ) {
        cout << b << " jest wieksze od " << a << endl;
    } else {
        cout << "Obie liczby są rowne. " << endl;
    }


    return 0;
}