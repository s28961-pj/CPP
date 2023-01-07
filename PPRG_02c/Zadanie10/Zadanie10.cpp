#include <iostream>

using namespace std;

int main()
{
    float liczba1 = 0; // pierwsza liczba
    float liczba2 = 0; // druga liczba
    int operacja = 1;  // domyslna operacja to dodawanie

    cout << "   KALKULATOR   " << endl;
    cout << "________________" << endl;
    cout << endl;

    do
    {
        cout << "Podaj pierwsza liczbe: ";
        cin >> liczba1;
        cout << endl;
        cout << "Podaj druga liczbe: ";
        cin >> liczba2;
        cout << endl;

        cout << "Wybierz dzialanie: " << endl;
        cout << "1. Dodawanie" << endl;
        cout << "2. Odejmowanie" << endl;
        cout << "3. Mnozenie" << endl;
        cout << "4. Dzielenie" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Twoj wybor: ";
        cin >> operacja;

        switch (operacja)
        {
        case 1:
            cout << liczba1 << " + " << liczba2 << " = " << liczba1 + liczba2 << endl;
            break;
        case 2:
            cout << liczba1 << " - " << liczba2 << " = " << liczba1 - liczba2 << endl;
            break;
        case 3:
            cout << liczba1 << " * " << liczba2 << " = " << liczba1 * liczba2 << endl;
            break;
        case 4:
            if (liczba2 != 0)
            {
                cout << liczba1 << " / " << liczba2 << " = " << liczba1 / liczba2 << endl;
            }
            else
            {
                cout << "Podaj inna druga liczbe, rozna od zera." << endl;
            }
            break;
        case 0:
            cout << "Dzieki i do zobaczenia!" << endl;
            return 0;
            break;
        default:
            cout << "Wybrales błedny numer dzialania. Sproboj ponownie." << endl;
            break;
        }
    } while (operacja != 0);
    return 0;
}