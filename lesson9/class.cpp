#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

class Fraction {
  private:
    int a, b;
    int nod(int c, int d);
  public:
    void print(ostream& out);
    Fraction(int c, int d);
  //Fraction(int c) :Fraction(c, 1) {}
    Fraction(int c) :a(c),b(1) {}
    Fraction():a(1),b(1) {}
  Fraction add(Fraction f2);
  Fraction substract(Fraction f2);
  Fraction multiply(Fraction f2);
  int getA() { return a; }
  bool operator == (Fraction fr2);
  };

void Fraction::print(ostream& out) {
  if (b == 1){
    out << a << endl;
  }
  else {
    if (abs(a)>abs(b)){
      out << a / b << ' ' << abs(a % b) << '/' << b;
      out << endl;
    } 
    else {
      out << a << '/' << b << endl;
    }
  }
}

bool Fraction::operator== (Fraction fr2){
  return (a == fr2.a) && (b == fr2.b);
}

bool operator!= (Fraction fr1, Fraction fr2){
  return !(fr1 == fr2);
}

int Fraction::nod(int c, int d) {
  if (c%d==0){
    return d;
  } else {
    return nod(d, c%d);
  }
}

Fraction Fraction::add(Fraction f2) {
  return Fraction(a * f2.a, b * f2.b);
}

Fraction Fraction::substract(Fraction f2) {
  return Fraction(a * f2.b - f2.a*b, b * f2.b);
}

Fraction Fraction::multiply(Fraction f2) {
  return Fraction(b * f2.b, b * f2.b);
}

Fraction add(Fraction f1, Fraction f2) {
  return Fraction(f1.add(f2));
}

Fraction operator+ (Fraction f1, Fraction f2) {
  return Fraction(f1.add(f2));
}

bool operator< (Fraction f1, Fraction f2) {
  return (f1.substract(f2).getA() < 0);
}

ostream& operator<< (ostream& out, Fraction fr){
  fr.print(out);
  return out;
}

Fraction::Fraction(int c, int d) {
  a = c;
  b = d;
  if (b < 0){
    b *= -1;
    a *= -1;
  }
  if (a==0){
    b = 1;
  } else {
    int tmp = nod(abs(a), abs(b));
    a /= tmp;
    b /= tmp;
  }
}

int main(void) {
Fraction forSort [3] = {Fraction(3), Fraction(1,2), Fraction(2,7)};
for(int i = 0; i < 3; i++){
  forSort[i].print(cout);
}
sort(forSort, forSort + 3);
for(int i = 0; i < 3; i++){
  forSort[i].print(cout);
}
cout << (forSort[0] == forSort[0]) << endl;
cout << (forSort[1] == forSort[0]) << endl;
cout << (forSort[0] != forSort[0]) << endl;
cout << (forSort[1] != forSort[0]) << endl;
ofstream fout ("fractions.txt");
for(int i = 0; i < 3; i++){
  forSort[i].print(fout);
}
for(int i = 0; i < 3; i++){
  cout << forSort[i]; 
}
cout << forSort[0] << forSort[1] << endl;
fout.close();
return 0;
}
