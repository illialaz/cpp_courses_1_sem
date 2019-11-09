#include <iostream>
#include <ctime>
using namespace std;

void Print(int B[], int size) {
	for (int i = 0; i < size; i++) {
		cout << B[i] << '\t';
	}
	cout << endl << endl;
}

void sycleShiftOne(int B[], int size) {
	int lastElem = B[size - 1];
	for (int i = size - 2; i >= 0; i--) {
		B[i + 1] = B[i];
	}
	B[0] = lastElem;
}

void sycleShift(int B[], int size,int times) {
	for (int i = 0; i < times; i++) {
		sycleShiftOne(B, size);
	}
}

int main() {
	const int N = 10;
	srand(time(0));
	//Определение массива
	int A[N]; //Статический массив 
	//Инициализация элементов массива
	for (int i = 0; i < N; i++) {
		A[i] = (rand() % 100 + 1);
	}
	//Вывод элементов массива
	Print(A, N);
	sycleShift(A, N, 3);
	Print(A, N);
	return 0;
}
