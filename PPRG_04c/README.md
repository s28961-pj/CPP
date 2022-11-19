# Podstawy programowania w C++:

### Zadanie 20
Popraw poniższy program, aby był zgodny z aktualnymi wymaganiami pisania bezpiecznych programów w C++.
W programie będącym prostym kalkulatorem (napisanym na pierwszych zajęciach i zmodyfikowany na drugich) i działającym w taki sposób, że obliczenia można wykonywać do momentu podania przez użytkownika 0, które oznacza koniec pracy, należy zmodyfikować w taki sposób, aby jego kod podzielić na minimum 5 funkcjami. Pierwsza funkcja o deklaracji void menu() ma wyświetlać menu programu, pozostałe funkcje mają realizować operacje matematyczne: float dodawanie (float, float), float odejmowanie(float, float), float mnozenie(float, float), float dzielenie(float, float). Funkcje należy zdefiniować poza funkcją main.
<code>
/*
Program realizuje prostym kalkulatorem pracującym z dwoma liczbami podawanymi z konsoli.
*/
#include <iostream>
using namespace std;
int main() {
     setlocale(LC_ALL, "");
float liczba1 = 0; // pierwsza liczba
float liczba2 = 0; //druga liczba
int operacja = 1; //domyślna operacją jest dodawanie
cout << " kalkulator" << endl;
cout << "-------------------------------" << endl;
cout << endl;
cout << "Podaj pierwszą liczbę: " << endl; //podanie 1 liczby cin >> liczba1;
cout << "Podaj drugą liczbę: " << endl; //podanie 2 liczby cin >> liczba2;
cout << endl;
cout << "Wybierz operację: " << endl; //interfejs
cout << "1. Dodawanie" << endl;
cout << "2. Odejmowanie" << endl;
cout << "3. Mnożenie" << endl;
cout << "4. Dzielenie" << endl;
cout << "0. Koniec" << endl;
cout << endl;
cin >> operacja; // podanie numeru opearcji
cout << "Twój wybór operacji: " << operacja
     switch (operacja) {
     case 1: cout << liczba1 << " + " << liczba2
liczba2; break; //wybór operacji dodawania
     case 2: cout << liczba1 << " - " << liczba2
liczba2; break; //wybór operacji odejmowania
case 3: cout << liczba1 << " * " << liczba2 liczba2; break; //wybór operacji mnożenia
<< endl;
<< " = " << liczba1 + << " = " << liczba1 - << " = " << liczba1 *
1
case 4:
if (liczba2 != 0) cout << liczba1 << " / " << liczba2 << " = "
<< liczba1 / liczba2;
                else cout << "podaj inną drugą liczbę - różną od zera" <<
endl; break; //wybór operacji dzielenia
case 0: cout << "Dziękuję" << endl; break; // zakończenie pracy
default: cout << "nie ma takiej operacji" << endl; }
return 0; }
</code>

### Zadanie 21*
Napisz funkcję o definicji void zamiana1(int, int), która dokona zamiany dwóch przekazanych przez wartość liczb, np.: int a = 4; int b = 8; na a = 8 i b = 4.
Funkcję należy wywołać w funkcji main w taki sposób:
cout << „podaj liczbę 1” << endl; cin >> a;
cout << „podaj liczbę 2” << endl; cin >> b;
zamiana1(a, b);
cout << „podaj liczbę 1” << endl; cin >> a;
cout << „podaj liczbę 2” << endl; cin >> b;
Dla porównania, stwórz funkcję void zamiana2(int &, int &), która przekaże do zamiany dwie liczby zapisane do zmiennych a i b przez referencję. Funkcję zamiana2 należy wywołać w takiej samej funkcji main jak powyżej. Porównaj wyniki. Co zauważyłeś?

### Zadanie 22*
Napisz program, który wykorzystuje mechanizm przeciążania funkcji do obliczania obwodów figur płaskich.

### Zadanie 23
Napisz program obliczający silnię dla podanej liczby n w sposób iteracyjny i rekurencyjny. Wykaż poprawność działania funkcji. Dla podanej liczby n = 3 poprawny wynik to: 1*2*3 = 6
W tym celu użyj prototypów funkcji:
int sil_iter(int n); // wersja iteracyjna
int sil_rek(int n); // wersja rekurencyjna

### Zadanie 24*
Napisz program obliczający sumę dla podanej liczby n w sposób iteracyjny i rekurencyjny. Wykaż poprawność działania funkcji. Przykładowo, dla podanej liczby n=3, poprawny wynik to: 1+2+3 = 6
W tym celu użyj prototypów funkcji:
int sum_iter(int n); // wersja iteracyjna
int sum_rek(int n); // wersja rekurencyjna

### Zadanie 25*
Napisz funkcję, której parametrami są liczby oznaczające długość, szerokość i wysokość prostopadłościanu a wynikiem jest pole powierzchni ścian oraz objętość.
Pamiętaj, że funkcja nie może zwrócić dwóch wartości jednocześnie (za pomocą return).
Jeden z wyników (np. pole) zwróć zatem za pomocą return a drugi (objętość) w parametrze przekazywanym przez adres.
Prototyp takiej funkcji: float prost(float dlug, float szer, float wys, float &objetosc); Przetestuj działanie tej funkcji w funkcji main.
Zmodyfikuj funkcję tak, aby dodatkowo zwracała −1 w przypadku, gdy długość, szerokość lub wysokość jest ujemna. W tym celu użyj dwukrotnie return;

### Zadanie 26*
Napisz funkcję max2, która zwraca większą z dwóch podanych jako jej parametry liczb, a następnie funkcję max3, zwracającą największą spośród trzech przekazanych w parametrach liczb. Funkcja max3 ma do tego celu używać funkcji max2.

### Zadanie 27
Napisz program, który obliczy iloczyn skalarny dwóch wektorów {X}n oraz {Y}n, składających się z elementów całkowitych. Maksymalny rozmiar wektorów n_max = 10. Aktualny rozmiar n wczytaj z klawiatury. Iloczyn skalarny dwóch wektorów oblicz według wzoru:

<img src="Zadanie27.png">

W programie należy utworzyć funkcje:
void czytaj_dane(int &n, int X[ ], int Y[ ]); int iloczyn_skalarny(int n, int X[ ], int Y[ ]);

### Zadanie 28*
Napisz program - wykorzystujący funkcje na zbadanie, czy wczytana z klawiatury dodatnia liczba całkowita n jest liczbą doskonałą.
UWAGA 1: Liczba doskonała to taka, dla której suma jej dzielników (nie licząc samej liczby n), jest równa tej liczbie. Przykładami liczb doskonałych są liczby 6 i 28.
UWAGA 2: Wystarczy sprawdzić podzielniki nie większe niż sqrt(n);
Program należy napisać w taki sposób, aby umożliwić wielokrotne jego wykonanie bez
konieczności powrotu do edytora.
Możesz wykorzystać poniższy algorytm lub zaproponować własny:

<img src="Zadanie28.png">

### Zadanie 29
Zmodyfikuj działanie programu, który jest prostą grą, a był realizowany na drugim spotkaniu. Modyfikacja programu ma polegać na tym, aby wprowadzić do jego kodu funkcje oraz pomiar czasu rozgrywki. Fabuła dotychczas opracowanej gry jest następująca: zadaniem w grze jest odgadnięcie wylosowanej przez komputer liczby (z przedziału od 1 do 100). Przy każdej próbie otrzymujesz wskazówkę, mówiącą czy wpisana przez ciebie wartość jest za duża, czy za mała. Na początku gry wprowadź ograniczenie na liczbę kroków, w których można odgadnąć wylosowaną liczbę. W przypadku odgadnięcia wylosowanej gry niech pojawi się komunikat „Wygrałeś” oraz obok liczba kroków, która była potrzebna aby odgadnąć liczbę.
Zaproponuj funkcje, które pozwolą zrealizować niniejsze zadanie.

Do wylosowania liczby użyj następującej linii kodu (generator liczb losowych):
#include <cstdlib> #include <ctime>
srand ((int) time(NULL));
int nWylosowana = rand() % 100 + 1;
Do pomiaru czasu można wykorzystać następujących kod: #include <windows.h>
int main() {
auto start = GetTickCount();
//...wywoływana funkcja
std::cout << GetTickCount() - start << " [ms]" << std::endl;
}

### Zadanie 30*
Napisz program obliczający, ile różnych podzbiorów k-elementowych można utworzyć ze zbioru n elementów, czyli liczymy:

<img src="Zadanie30.png">

Program należy napisać w dwóch wersjach:
- bez użycia funkcji
- z użyciem dwóch funkcji: na obliczenie silni oraz na obliczenie wyniku.