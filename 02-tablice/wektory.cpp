#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{


    int n {0};
    cout << "Podaj rozmiar wektorów: ";
    cin >> n;

    int v[n], w[n];
    int tab[n];

    cout << "wektor V:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "V[" << i << "] = ";
        cin >> v[i];
    }

    cout << endl << "wektor W:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "W[" << i << "] = ";
        cin >> w[i];
    }

    int iloczyn_sk {0};

    cout << endl;
    cout << "Suma: [";
    for (int i = 0; i < n; i++) {
        tab[i] = w[i] + v[i];
        iloczyn_sk += v[i] * w[i];
        cout << " " << tab[i];
    }
    cout << " ]" << endl;
    cout << "Iloczyn skalarny: " << iloczyn_sk << endl;

}
