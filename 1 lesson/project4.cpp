#include <iostream>
using namespace std;

void razlo(int n) {
	cout << n << " = 1";;
	int d = 2;
	while (n) {
		if (n % d == 0) {
			cout << " * " << d;
				n /= d;
		}
		else {
			++d;
		}
	}
}

int main() {
	int n;
	cout << "Enter a number" << endl;
	cin >> n;
	razlo(n);
	return 0;
}