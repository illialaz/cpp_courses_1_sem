#include <iostream>
#include <fstream>
#include <algorithm> // to use sort
using namespace std;

const int n = 100;

int readFromFile(int arr[]) {
	ifstream fin("/Users/illia/Programming/projects/cpp/input.dock");
	int size;
	fin >> size;
	for (int i = 0; i < size; i++) {
		fin >> arr[i];
	}
	return size;
}

void print(int arr[], int size) {
	cout << "--->>>\n";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << '\t';
	}
	cout << "\n--->>>\n";
}

void transform(int source[], int destination[], int size) {
	int left = 0;
	int right = size - 1;
	for (int i = 0; i < size; i++) {
		if (source[i] % 2) 
			destination[right--] = source[i];
		else  destination[left++] = source[i]; 
	}
}

void reverse(int arr[], int size) {
	for(int i = 0, j = size - 1; i < j ;i ++, j--){
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
}

int myCompare(const void* pa, const void* pb) {
	int a = *((int*)pa);
	int b = *((int*)pb);
	return a - b;
}

void copyArray(int source[], int dest[], int size) {
	for (int i = 0; i < size; i++) {
		dest[i] = source[i];
	}
}

int findAbsentElement(int source[], int size) {
	int copy[n];
	copyArray(source, copy, size);
	sort(copy, copy + size);
	int i;
	for (i = 0; i < size - 1; i++) {
		if((copy[i + 1] - copy[i] != 1)) break;
	}
	return copy[i] + 1;
}

int findMin(int source[], int size) {
	int min = source[0];
	for (int i = 1; i < size; i++) {
		min = (min < source[i]) ? min : source[i];
	}
	return min;
}

int findByValue(int source[], int size, int value) { //-1 if didnt find, else position in array
	for (int i = 0; i < size; i++) {
		if (source[i] == value) {
			return i;
		}
	}
	return -1;
}

int findAbsentElement2(int source[], int size) { //Use only 1 cell of memory
	int val = findMin(source, size); //value at start  is min element of array
	val++;
	for (int i = 1; i < size; i++, val++) {
		if (findByValue(source, size, val) == -1) return val;
	}
	return val;
}

int main() {
	int Array[n];
	int Result[n];
	int size = readFromFile(Array);
	print(Array, size);
	transform(Array, Result, size);
	print(Result, size);
	reverse(Array, size);
	print(Array, size);
	//sort(Array, Array + size);
	//qsort(Array, size, sizeof(int), myCompare);
	print(Array, size);
	cout << "Absent element is " << findAbsentElement2(Array, size);
	return 0;
}
