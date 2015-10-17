/*
Rozbuduj poprzeni program o następujące operacje modyfikujące elementy tablicy.
Po każdej operacji wypisz tablicę na ekran, aby sprawdzić, czy operacja została poprawnie wykonana:

-  odwracanie kolejności elementów tablicy
- przesunięcie tablicy w prawo (element na pozycji 0 jest przesuwany na pozycję 1,
element na pozycji 1 jest przesuwany na pozycję numer 2, itd.
- Ostatni element jest wstawiany na pozycję 0)
- sortowanie tablicy (uporządkowanie elementów rosnąco)
*/

#include <iostream>

#define SIZE 10

using std::cout;
using std::endl;

int main() {

    int tab[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            tab[i][j] = (i + 1) * (j + 1);
            cout << tab[i][j] << "\t";
        }    
        cout << endl;
    }


}
