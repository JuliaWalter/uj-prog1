#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    std::string napis;
    cout << "Wpisz liczbę: ";
    cin >> napis;

    bool palindrom {true};
    for (int i = 0; i < napis.size(); i++) {
        if (napis[i] != napis[napis.size()-1-i]) {
            palindrom = false;
            break;
        }
    }

    if (palindrom) {
        cout << "Liczba jest palindromem" << endl;
    } else {
        cout << "Liczba nie jest palindromem" << endl;
    }
}
