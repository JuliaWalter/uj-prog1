bool compare(int a, int b);
void sort(int tab[], int rozmiar, bool (*compareWsk)(int, int));

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <utility>

#define SIZE 10

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

    bool (*compareWsk)(int, int);
    compareWsk = &compare;

    sort(tab, SIZE, compareWsk);

    cout << "Tablica posortowana: ";
    for (int i = 0; i < SIZE; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

}

void sort(int tab[], int rozmiar, bool (*compareWsk)(int, int))
{
    do {
        for (int i = 0; i < rozmiar-1; i++) {
            if ((*compareWsk)(tab[i], tab[i+1])) {
                //std::swap(tab[i], tab[i+1]);
                int c = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = c;
            }
        }
        rozmiar--;
    } while (rozmiar > 1);

}

bool compare(int a, int b)
{
    if (a > b) {
        return true;
    } else {
        return false;
    }

}
