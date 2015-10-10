#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int gcd(int a, int b);

int main(int argc, char* argv[]) {
	int a{0};
	int b{0};
	
	cout << "największy wspólny dzielnik liczb a i b" << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	
	cout << "największy wspólny dzielnik a i b to: " << 
		gcd(a, b) << endl;
}

int gcd(int a, int b) {
	int t{0};
	
	if (a < b) {
		int c = a;
		a = b;
		b = c;
	}
	
	while (b != 0) {
		t = b;
		b = a % b;
		a = t;
	}
	return a;
} 
