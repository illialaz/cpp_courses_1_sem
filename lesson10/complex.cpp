#include <iostream>
#include <cmath>
#include "complex.h"
using namespace std;

Complex::Complex(double re, double im) {
  this->re = re;
  this->im = im;
}

ostream& operator << (ostream & out, const Complex& comp) {
  out << comp.getRe() << "+ i *" << comp.getIm();
  return out;
}

bool operator == (const Complex& c1, const Complex& c2) {
  return (c1.getRe() == c2.getRe()) && (c1.getIm() == c2.getIm());
}

bool operator != (const Complex& c1, const Complex& c2) {
  return !(c1 == c2);
}

Complex operator + (const Complex& c1, const Complex& c2) {
  return Complex (c1.getRe() + c2.getRe(), c1.getIm() + c2.getIm());
}

double Complex::mod() const {
  return sqrt(pow(re, 2) + pow(im, 2));
}

bool operator < (const Complex& c1, const Complex& c2) {
  return (c1.mod() < c2.mod());
}
