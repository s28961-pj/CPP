#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis = "";

    do
    {
        cout << "Podaj napis, ktory zostanie wydrukowany w ramce." << endl;
        getline(cin, napis);
        if (napis.empty()) {
            cout << "Napis nie moze byc pusty. Sproboj ponownie." << endl;
        }
    } while ((napis.empty()));

    for (int i = 0; i < (napis.size() + 2); i++)
    {
        cout << "*";
    }

    cout << "\n*" << napis << "*" << endl;

    for (int i = 0; i < (napis.size() + 2); i++)
    {
        cout << "*";
    }
    cout << endl;

    return 0;
}