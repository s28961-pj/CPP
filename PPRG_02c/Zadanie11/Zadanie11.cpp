#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // wylosowanie liczby
    srand((int)time(NULL));
    int wylosowana = rand() % 100 + 1;

    cout << "Witaj w grze ZGADUJ - ZGADULA! " << endl;
    cout << "Wylosowano liczbe z przedzialu 1-100." << endl;

    // pierwsza próba odgadnięcia liczby
    int wprowadzona;
    cout << "Sprobuj ja odgadnac w maksymalnie 10 krokach: ";
    cin >> wprowadzona;
    int licznik = 1;

    // kolejne próby, aż do skutku - przy użyciu pętli while
    while ((wprowadzona != wylosowana))
    {
        if (wprowadzona < wylosowana)
            cout << "Liczba jest zbyt mala.";
        else
        {
            cout << "Za duza liczba.";
        }

        cout << " Sprobuj jeszcze raz: ";
        cin >> wprowadzona;
        licznik++;
        
        if (licznik >= 10)
        {
            cout << "Niestety wykorzystano 10 prob..." << endl;
            return 1;
        }
    }
    if (wylosowana == wprowadzona)
    {
        cout << "Celny strzal :) Brawo!" << endl;
        cout << "Ilosc prob: " << licznik << endl;
    }
}
