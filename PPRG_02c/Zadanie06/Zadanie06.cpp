#include <iostream>

using namespace std;

int main()
{
    int suma = 0, i = 0, n, a;

    cout << "Podaj ilosc liczb (n): ";
    cin >> n;
    while (i < n)
    {
        cout << "Podaj liczbe: ";
        cin >> a;
        suma = suma + a;
        i++;
    }
    cout << "Suma " << n << " liczb wynosi: " << suma << endl;
    return 0;
}