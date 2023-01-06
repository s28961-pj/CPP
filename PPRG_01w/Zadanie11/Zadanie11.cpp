#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float a, b, c, delta, x_0, x_1, x_2;

    cout << "\nRÓWNANIE KWADRATOWE (axx + bx + c = 0)" << endl;
    cout << "----------------------------------------" << endl;

    cout << "Wprowadz a: ";
    cin >> a;

    if ( a == 0 ) {
        cout << "Wspolczynnik a = 0! To nie jest rownanie kwadratowe." << endl;
        return 1;
    }

    cout << "Wprowadz b: ";
    cin >> b;

    cout << "Wprowadz c: ";
    cin >> c;

    delta = b * b - ( 4 * a * c );

    if ( delta < 0 )
    {
        cout << "Rownanie nie ma rozwiazania.";
        return 0;
    }

    if ( delta == 0 )
    {
        cout << "Rownanie ma jedno rozwiazanie: ";
        x_1 = -b / ( 2 * a );
        cout << x_1;
        return 0;
    }
    
    delta = sqrt(delta);
    x_1 = (-b - delta) / (2 * a);
    x_2 = (-b + delta) / (2 * a);
    cout << "Rowanie ma dwa rozwiazania: ";
    cout << "x_1 = " << x_1 << "   x_2 = " << x_2 << endl;


    return 0;
}