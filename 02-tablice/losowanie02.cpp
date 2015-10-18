/*
Rozbuduj poprzeni program o operacje modyfikujące elementy tablicy.
Po każdej operacji wypisz tablicę na ekran:
- odwracanie kolejności elementów tablicy
- przesunięcie tablicy w prawo
(element na pozycji 0 jest przesuwany na pozycję 1,
element na pozycji 1 jest przesuwany na pozycję numer 2, itd.
Ostatni element jest wstawiany na pozycję 0)
- sortowanie tablicy (uporządkowanie elementów rosnąco)
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

#define SIZE 10

using std::cout;
using std::endl;

int main() {

	int tab[SIZE];
	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) {
		tab[i] = rand() % 100;

		cout << tab[i] << " ";
	}

    for (int i = 0; i < SIZE; i++) {
        
    }

}
