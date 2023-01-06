#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int suma = 0;

    cout << "\nSUMA KWADRATOW OD 1 DO n\n"
         << endl;
    cout << "------------------" << endl;

    cout << "Wprowadz n: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        suma += i * i;
    }
    cout << "Sumę kdwadratów liczb od 1 do " << n << " wynosi " << suma << endl;

    return 0;
}
