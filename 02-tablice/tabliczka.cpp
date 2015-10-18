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
