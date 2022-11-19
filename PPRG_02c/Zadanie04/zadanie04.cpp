#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int suma = 0;

    cout << "Wprowadz n: ";
    cin >> n;
    for (int i=0; i <= n; i++) {
        suma += i*i;
    }
    cout << "Sumę kdwadratów liczb od 1 do n\n(1*1 + 2*2 + ... + n*n)= " << suma << endl;

    return 0;
}
