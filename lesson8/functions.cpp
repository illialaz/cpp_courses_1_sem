#include <iostream>
using namespace std;

void func1(int a, int b){
  a++;
  b++;
}

void func2(int& a, int& b){
  a++;
  b++;
}

void func3(int* pa, int* pb){
  (*pa)++;
  (*pb)++;
}

void swap1(int* pa, int* pb){
  int tmp = *pa;
  *pa = *pb;
  *pb = tmp;
}

void swap2(int&a, int&b){
  int tmp = a;
  a = b; 
  b = tmp;
}

int main(void){
  int a = 1, b = 2;
  cout << a << " " << b << endl;
  func1(a, b);
  cout << a << " " << b << endl;
  func2(a, b);
  cout << a << " " << b << endl;
  func3(&a, &b);
  cout << a << " " << b << endl;
  swap1(&a, &b);
  cout << a << " " << b << endl;
  swap2(a, b);
  cout << a << " " << b << endl;
}
