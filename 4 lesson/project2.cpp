//Вычислить сумму последовательности до первого нуля
#include <iostream>
using namespace std;

int main() {
	int n, sum = 0;
//	for (;;) {
	while(true){
		cin >> n;
		if (n == 0) break;
		sum += n;
	}
	cout << sum;
	return 0;
}
/*int main() {
	int num, s = 0;
	do {
		cin >> num;
		s += num;
	} while (num != 0);
	cout << "sum = " << s << endl;
	return 0;
}*/
