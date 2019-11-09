#include <iostream>
#include <cmath>
using namespace std;

double mySin(double x, double eps) {
	double sum = 0;
	double a = x;
	int n = 1;
	while (abs(a) >= eps) {
		sum += a;
		a = a * (-1) * x * x/ (2 * n * (2 * n + 1));
		n++;
	}
	return sum;
}

int main() {
	double x, eps;
	cin >> x >> eps;
	cout << "sin " << x << " = " << mySin(x, eps) << endl;
	cout << sin(x);
	return 0;
}