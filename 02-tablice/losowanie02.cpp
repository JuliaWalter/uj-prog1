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
#include <utility>

#define SIZE 10

using std::cout;
using std::endl;

int main() {

	int tab[SIZE];
	srand(time(NULL));

    cout << "Tablica: ";
	for (int i = 0; i < SIZE; i++) {
		tab[i] = rand() % 100;
		cout << tab[i] << " ";
	}
    cout << endl;

    for (int i = 0; i < SIZE / 2; i++) {
        //int t = tab[SIZE - i - 1];
        //tab[SIZE - i - 1] = tab[i];
        //tab[i] = t;
        std::swap(tab[SIZE - i - 1], tab[i]);
    }

    cout << "Tablica odwrócona: ";
    for (int i = 0; i < SIZE; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    int t{0};
    for (int i = 0; i < SIZE; i++) {
        if (i + 1 == SIZE) {
            tab[0] = tab[SIZE - 1];
            tab[SIZE - 1] = t;
        } else {
            int r = tab[i];
            tab[i] = t;
            t = r;
        }
    }

    cout << "Tablica przesunięta w prawo: ";
    for (int i = 0; i < SIZE; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

}
