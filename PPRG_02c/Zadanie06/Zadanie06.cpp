#include <iostream>

using namespace std;

int main()
{
    int suma = 0;
    int i = 0;
    int n, a;

    cout << "Podaj ilosc liczb (n): ";
    cin >> n;

    while (i < n)
    {
        cout << "Podaj liczbe: ";
        cin >> a;
        suma = suma + a;
        i++;
    }
    cout << suma << endl;
    return 0;
}