#include <iostream>

using namespace std;

int main()
{
    cout << "\nCZY NALEŻY DO PRZEDZIAŁU <1,10> LUB <17,21> ?\n"
         << endl;
    cout << "-------------------------------------------------" << endl;

    int number;
    cout << "Wprowadz liczbe nr 1: ";
    cin >> number;
    if ((number >= 1 && number <= 10) || (number >= 17 && number <= 21))
    { // Zagniezdzenie wyrazen logicznych
        cout << "\nPodana liczba NALEŻY do przedziału" << endl;
    }
    else
        cout << "\nPodana liczba NIE NALEŻY do przedziału" << endl;

    return 0;
}