/*
Napisz program, który kolejno:
- utworzy 10-elementową tablicę liczb typu int
- uzupełni tablicę losowymi wartościami
- wypisze elementy tablicy na ekran
- wypisze na ekran średnią arytmetyczną, geometryczną oraz
medianę elementów tablicy
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

#define SIZE 10

using std::endl;
using std::cout;

int main() {

    int tab[SIZE];
    srand(time(NULL));

    double suma{0};
    double iloczyn{1};
    float mediana{0};

    for (int i = 0; i < SIZE; i++) {
        tab[i] = rand() % 100; // ograniczenie do 100

        suma += tab[i];
        iloczyn *= tab[i];

        cout << tab[i] << " ";
    }

    int i{SIZE / 2};
    if (SIZE % 2 == 0) {
        mediana = (tab[i] + tab[i + 1]) / 2;
    } else {
        mediana = tab[i] / 2;
    }

    cout << endl;
    cout << "średnia arytmetyczna = " << suma / SIZE << endl;
    cout << "średnia geometryczna = " << pow(iloczyn, 1.0 / SIZE) << endl;
    cout << "mediana = " << mediana;

    cout << endl;
}
