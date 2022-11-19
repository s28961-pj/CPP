#include <iostream>

using namespace std;

int Dodawanie(int a, int b)
{
    return a + b;
}

int Odejmowanie(int a, int b)
{
    return a - b;
}

int Mnozenie(int a, int b)
{
    return a * b;
}

int Dzielenie(float a, float b)
{
    return a / b;
}

int Modulo(int a, int b)
{
    return a % b;
}

int main()
{
    int liczba1, liczba2, dzialanie;

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
        cout << "5. Modulo" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Twoj wybor: ";
        cin >> dzialanie;

        switch (dzialanie)
        {
        case 1:
            cout << liczba1 << " + " << liczba2 << " = ";
            cout << Dodawanie(liczba1, liczba2) << endl;
            break;
        case 2:
            cout << liczba1 << " - " << liczba2 << " = ";
            cout << Odejmowanie(liczba1, liczba2) << endl;
            break;
        case 3:
            cout << liczba1 << " * " << liczba2 << " = ";
            cout << Mnozenie(liczba1, liczba2) << endl;
            break;
        case 4:
            cout << liczba1 << " / " << liczba2 << " = ";
            cout << Dzielenie(liczba1, liczba2) << endl;
            break;
        case 5:
            cout << liczba1 << " % " << liczba2 << " = ";
            cout << Modulo(liczba1, liczba2) << endl;
            break;
        case 0:
            cout << "Dzieki i do zobaczenia!";
            return 0;
            break;
        default:
            cout << "Wybrales błedny numer dzialania. Sproboj ponownie." << endl;
            break;
        }
    } while (dzialanie <= 0 || dzialanie > 5);
}