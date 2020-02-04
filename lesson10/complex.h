class Complex {
private:
  double re, im;
public:
  Complex(double = 0., double = 0.);
  double getRe()const { return re; }
  double getIm()const { return im; }
  void setRe(double re) { this->re = re; }
  void setIm(double im) { this->im = im; }
  double mod()const;
};

std::ostream& operator << (std::ostream&, const Complex&);
bool operator == (const Complex&, const Complex&);
bool operator != (const Complex&, const Complex&);
Complex operator + (const Complex&, const Complex&);
bool operator < (const Complex&, const Complex&);
