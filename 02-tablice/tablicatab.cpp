/* Dokonaj transpozycji wygenerowanej w poprzednim zadaniu tablicy.
 * Dokładniej, teraz element o indeksach (m,n) ma mieć wartość (n+1)m.
Ważne: zmodyfikuj istniejącą tablicę bez ponownego wykonywania obliczeń!
*/
#include <iostream>
#include <cmath>

#define SIZE 8

using std::cout;
using std::endl;

int main()
{

    int tab[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            tab[i][j] = pow(i + 1, j);
            cout << tab[i][j] << "\t";
        }
        cout << endl;
    }

    /*
    for n = 0 to N - 2
    	for m = n + 1 to N - 1
    		swap A(n,m) with A(m,n)
    */

    for (int i = 0; i <= SIZE-2; i++) {
        for (int j = i+1; j <= SIZE-1; j++) {
            std::swap(tab[i][j], tab[j][i]);
        }
    }

    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << tab[i][j] << "\t";
        }
        cout << endl;
    }
}
