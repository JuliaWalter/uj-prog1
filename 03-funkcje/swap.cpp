/* Napisz funkcję "przestaw(swap)", która przepisze wartość pierwszego argumentu do drugiego i drugiego do pierwszego.
 * Napisz dwie wersje tej funkcji: jedną z argumentami, które są wskaźnikami i drugą, której argumentami są referencje.
 * Napisz program testujący tą funkcje. */

#include <iostream>

int swap_ref(int &x, int &y);
int swap_wsk(int *a, int *b);

using std::cout;
using std::endl;

int main()
{

    int a {6};
    int b {8};

    cout << a << b << endl;

    swap_ref(a, b);
    cout << a << b << endl;

    swap_wsk(&a, &b);
    cout << a << b;

}

int swap_ref(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;

}

int swap_wsk(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;

}


