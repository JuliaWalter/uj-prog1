#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	cout << "Hello" << endl;
	
	int a{0};
	int b{0};
	int c{0};
	
	cout << "Podaj współczynnik " << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	
	cout << endl << "f(x) = " << 
		a << "x^2 + " << 
		b << "x + " << 
		c << endl;
		
	double delta{0};
	delta = b * b - 4 * a * c;
	
	if (delta < 0) {
		cout << "Brak rozwiązań rzeczywistych";
		return 1;
	} else if (delta == 0) {
		cout << "f(" << -b/(2 * a) << ") = 0" << endl;
	} else if (delta > 0) {
		cout << "f(" << (-b - sqrt(delta))/(2 * a) << ") = 0" << endl;
		cout << "f(" << (-b + sqrt(delta))/(2 * a) << ") = 0" << endl;
	}
		
}


