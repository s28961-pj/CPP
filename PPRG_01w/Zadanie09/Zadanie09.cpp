#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    cout << "--------------------------------------" << endl;
    cout << "  PODAJ 5 LICZB W PORZĄDKU ROSNĄCYM." << endl;
    cout << "--------------------------------------" << endl;

    int Num1, Num2, Num3, Num4, Num5;
    string errorMessage = "Liczba jest mniejsza/rowna poprzedniej. Sproboj ponownie...";

    cout << "Podaj liczbe nr 1: ";
    cin >> Num1;
    do
    {
        cout << "Podaj liczbe nr 2: ";
        cin >> Num2;
        if (Num2 <= Num1)
        {
            cout << errorMessage << endl;
        };
    } while (Num2 <= Num1);

    do
    {
        cout << "Podaj liczbe nr 3: ";
        cin >> Num3;
        if (Num3 <= Num2)
        {
            cout << errorMessage << endl;
        };
    } while (Num3 <= Num2);

    do
    {
        cout << "Podaj liczbe nr 4: ";
        cin >> Num4;
        if (Num4 <= Num3)
        {
            cout << errorMessage << endl;
        }
    } while (Num4 <= Num3);

    do
    {
        cout << "Podaj liczbe nr 5: ";
        cin >> Num5;
        if (Num5 <= Num4)
        {
            cout << errorMessage << endl;
        };
    } while (Num5 <= Num4);

    cout << endl << "Podane liczby: " << endl;
    cout << Num1 << " " << Num2 << " " << Num3 << " " << Num4 << " " << Num5 << endl;

    return 0;
};