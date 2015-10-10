#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool isPrime(int n);

int main() {
	int liczba{0};
	cout << "Liczba: " << endl;
	cin >> liczba;
	cout << endl;
	
	if (liczba % 2 != 0) {
		cout << "Podaj liczbe parzysta" << endl;
		return 0;
	}
	
	for (int sk1{1}, sk2{0}; sk1 <= liczba / 2; sk1++) {
		sk2 = liczba - sk1;
		
		if (isPrime(sk1) && isPrime(sk2)) {
			cout << sk1 << "+" << sk2 << endl;
		}
		
	}
}
bool isPrime(int n) {
	if (n == 1 || n == 0) {
		return false;
	}
	for (int dzielnik{2}; dzielnik <= n/2; dzielnik++) {
		if (n % dzielnik == 0) {
			return false;
		}
	}
	return true;
}
