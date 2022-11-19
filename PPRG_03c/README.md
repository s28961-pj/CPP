# Podstawy programowania w C++
---

### Zadanie 13a
Napisz program, który wypełni tablicę liczbami losowymi typu <b>int</b> z przedziału `[a, b]` podanego przez użytkownika. Przyjmij, że maksymalny rozmiar tablicy to `100`. Rzeczywisty rozmiar `n` podaje użytkownik `(n<=100)`. Program ma wykonać następujące operacje:
1. średnia arytmetyczna elementów tablicy
2. liczba wystąpień elementu podanego przez użytkownika
3. liczba elementów nieparzystych oraz ich suma
4. element minimalny oraz jego indeks
5. element maksymalny oraz jego indeks
6. para sąsiednich elementów o największej sumie
7. element najczęściej występujący w tablicy
8. przestawienie kolejności elementów w tablicy (np. pierwszy – ostatni, ostatni –
pierwszy itp...)
9. kopiowanie tablicy

### Zadanie 13b
Napisz program, który wypełni tablicę dynamiczną w postaci VECTORA liczbami losowymi typu int z przedziału `[a, b]` podanego przez użytkownika. Przyjmij, że maksymalny rozmiar tablicy to `100`. Rzeczywisty rozmiar n podaje użytkownik `(n<=100)`.

VECTORY to tablice dynamiczne w C++, które posługują się następującymi funkcjami:
- `push_back()` - dodaje do końca tablicy nowy element podany w nawiasie - insert() - dodaje element do dynamicznej tablicy w podanym miejscu
- `begin()` - wskazuje pierwszy element dynamicznej tablicy
- `end()` - wskazuje na koniec dynamicznej tablicy
- `size()` - zwraca ilość elementów tablicy.

Program ma wykonać następujące operacje:
1. średnia arytmetyczna elementów tablicy
2. liczba wystąpień elementu podanego przez użytkownika
3. liczba elementów nieparzystych oraz ich suma
4. element minimalny oraz jego indeks

### Zadanie 14
Napisz program wczytujący znaki z klawiatury aż do momentu naciśnięcia klawisza `‘k’`. Znaki zapisywane są w tablicy `char[]`. Na zakończenie program generuje następujące informacje: ilość podanych znaków (przed wciśnięciem `‘k’`) oraz ilość znaków będących dużymi literami.

<code>
if ((znak > 47) && (znak < 58)) cout << "Jest to cyfra." << endl;
if ((znak > 96) && (znak < 123)) cout << "Jest to mala litera." << endl;
if ((znak > 64) && (znak < 91)) cout << "Jest to duza litera." << endl;
</code>

### Zadanie 15
Napisz program, który wczyta dowolny wyraz do tablicy typu char i sprawdza czy jest on <b>palindromem</b>. Palindrom to takie wyrażenie, które czytane od lewej do prawej brzmi tak samo jak czytane od prawej do lewej, np. oko, anna, kajak, owocowo.

### Zadanie 16
W oparciu o poniższy pseudokod napisz program, który dla zadanej tablicy będzie realizował <b>sortowanie bąbelkowe</b>. A następnie powtórz kroki i zastosuj sortowanie dla vectora. Aby porównać działanie zmierz czasy sortowania. Wykonaj testy dla kilku rozmiarów tablic.

<code><pre>
procedure sort_babel(A : lista elementów do posortowania, n : liczba_elementów(A))
  n = liczba_elementów(A)
do
for (i = 0; i < n-1; i++) do:
if A[i] > A[i+1] then swap(A[i], A[i+1])
end if end for n = n-1
while n > 1 end procedure
</pre></code>

W funkcji głównej `main`, przy wywołaniu funkcji z algorytmem, użyj poniższy kod aby ocenić działanie algorytmu dla wypełnionej (losowymi wartościami) tabeli o trzech rozmiarach `n = 25; 50; 100`.
Kod pozwalający ocenić czas wykonywania algorytmu:

<code><pre>
#include <windows.h>
  
int main() {
auto start = GetTickCount();
//...wywoływana funkcja
std::cout << GetTickCount() - start << " [ms]" << std::endl;
}
</pre></code>

### Zadanie 17
Napisz program, który oblicza iloczyn skalarny dwóch wektorów składających się z elementów całkowitych. Maksymalny rozmiar wektorów wynosi `10`, rzeczywisty rozmiar n `(n ≤ 10)` wczytaj z klawiatury.

Przykład: dla n = 3, x = (1, 2, 3), y = (4, 5, 6) iloczyn skalarny wektorów x i y jest równy (1 · 4) + (2 · 5) + (3 · 6) = 32.

### Zadanie 18
W każdym z zadań utwórz tablicę `10x10` oraz pobierz z klawiatury rzeczywisty wymiar wierszowy `n <= 10` i kolumnowy `m <= 10`. Wypełnij tablicę losowymi liczbami typu int z przedziału `[0, 9]` i wyświetl ją.
Po wprowadzeniu n = 5, m = 4 program powinien wypełnić tablicę wymiaru 5x4 losowymi liczbami całkowitymi z przedziału [0, 9], np:

<pre>
5 1 8 3
7 0 3 0 
8 4 6 2
0 7 2 1
4 3 5 5
</pre>

### Zadanie 19
Napisz program, który znajdzie element maksymalny macierzy oraz jego położenie (indeks wierszowy i kolumnowy).
Przykład: dla tablicy z zadania 18: `element maksymalny = 8`, położenie: `wiersz = 0`, `kolumna = 2` (pierwsze wystąpienie).

### Zadanie 20
Napisz program, który dla zadanej tabeli będzie realizował <b>algorytm sortowania quicksort</b>. Kod zawierający algorytm sortowania umieść w funkcji `void sort_quick (int A[], int &n);` a samą funkcję umieść w tym samym pliku nagłówkowym co utworzoną w punkcie 21 funkcję sort_babel.
W podobny sposób, jak w zadaniu 21, oceń szybkość działania algorytmu. Czyli, w funkcji głównej `main`, przy wywołaniu funkcji z algorytmem, użyj funkcji `GetTickCount()` i ocenić działanie algorytmu dla wypełnionej (losowymi wartościami) tabeli o trzech rozmiarach `n = 25; 50; 100.` Uzyskane wyniki porównaj z wynikami otrzymanymi dla funkcji z punktu 21.

### Zadanie 21
Napisz program, który wypełni tablicę dynamiczną w postaci VECTORA liczbami losowymi typu int z przedziału `[a, b]` podanego przez użytkownika. Przyjmij, że maksymalny rozmiar tablicy to `100`. Rzeczywisty rozmiar n podaje użytkownik `(n<=100)`.

VECTORY to tablice dynamiczne w C++, które posługują się następującymi funkcjami:
- `push_back()` - dodaje do końca tablicy nowy element podany w nawiasie
- `insert()` - dodaje element do dynamicznej tablicy w podanym miejscu
- `begin()` - wskazuje pierwszy element dynamicznej tablicy
- `end()` - wskazuje na koniec dynamicznej tablicy
- `size()` - zwraca ilość elementów tablicy

Program ma wykonać następujące operacje:
5. średnia arytmetyczna elementów tablicy
6. liczba wystąpień elementu podanego przez użytkownika
7. liczba elementów nieparzystych oraz ich suma
8. element minimalny oraz jego indeks
9. element maksymalny oraz jego indeks
