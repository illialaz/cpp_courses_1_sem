#include <iostream>
#include <cmath>
using namespace std;

class Fraction {
  private:
    int a, b;
    int nod(int c, int d);
  public:
    Fraction() : a(1), b(1){};
    Fraction(int a1, int b1);
    Fraction(int a1) : a(a1), b(1){};
    //Fraction(int a1):Fraction(a1, 1){}; //for C++ 11
    void print();
};

int Fraction::nod(int c, int d){
  if(c % d == 0){
    return d;
  }
  else {
    return nod(d, c % d);
  }
}

Fraction::Fraction(int a1, int b1){
  a = a1;
  b = b1;
  if(b < 0){
    a *= -1;
    b *= -1;
  }
  if(a == 0){
    b = 1;
  } else {
    int tmp = nod(abs(a), abs(b));
    a /= tmp;
    b /= tmp;
  }
}

void Fraction::print(){
  cout << a;
  if(b != 1){
    cout << '/' << b;
  }
  cout << endl;
}


int main(void){
  Fraction f1 (2, 7), f2 (3, -1), f3 (-3, -4), f4 (-2, 5), f5 (3, -6), f6 (-8, 2), f7 (0, 2), f8 (5);
  Fraction fraction[10];
  for(int i = 0; i < 10; i++){
    fraction[i].print();
  }
  f1.print(); 
  f2.print();
  f3.print();
  f4.print(); 
  f5.print();
  f6.print();
  f7.print();
  f8.print();
  return 0;
}
