/* Napisz funkcję sortującą rosnąco tablice liczbową.
Argumentami funkcji niech będzie tablica oraz jej rozmiar.
Wykorzystaj w funkcji zmienną statyczną w celu zliczenia ilości
przestawień elementów w tablicy w celu jej posortowania.
Napisz program testujący tą funkcje. */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <utility>

#define SIZE 10

int sort(int tab[], int rozmiar);

using std::cout;
using std::endl;

int main()
{

    int tab[SIZE];
    srand(time(NULL));

    cout << "Tablica: ";
    for (int i = 0; i < SIZE; i++) {
        tab[i] = rand() % 100;
        cout << tab[i] << " ";
    }

    cout << endl;

    sort(tab, SIZE);
    sort(tab, SIZE);
    sort(tab, SIZE);

    cout << "Tablica posortowana: ";
    for (int i = 0; i < SIZE; i++) {
        cout << tab[i] << " ";
    }

}

int sort(int tab[], int rozmiar)
{
    static int ilosc_przestawien {0};
    for (int i= 0; i < rozmiar-1; i++) {
        for(int j = i+1; j < rozmiar; j++) {
            if (tab[i] > tab[j]) {
                int c = tab[i];
                tab[i] = tab[j];
                tab[j] = c;
                ilosc_przestawien++;
            }
        }
    }
    ilosc_przestawien += 1000;
    cout << "Liczba przestawień: " << ilosc_przestawien << endl;
}





