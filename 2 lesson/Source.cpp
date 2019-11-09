#include <iostream>
using namespace std;


int Reverce(int n) {
	int reverce = 0;
	while (n) {
		reverce = reverce * 10 + n % 10;
		n /= 10;
	}
	return reverce;
}

bool isPalindrom(int n) {
	return (n == Reverce(n));
}

int main() {
	int right, left;
	cin >> left >> right;
	for (int n = left; n <= right; n++) {
		if (isPalindrom(n)) {
			cout << n << endl;
		}
	}
	return 0;
}