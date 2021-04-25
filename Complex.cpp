#include <iostream>
using namespace std;

class Complex{
private: 
  double real;
  double imag;

  public:
  void set(double, double);
  double getreal();
  double getimag();
  void print();
};

void Complex::set(double r, double i){
  real = r;
  imag = i;
}
void Complex:: print(){
  cout<< real;
  cout.setf(ios::showpos);
  cout << imag << 'i' << endl;
}

double Complex::getreal(){ return real; }
double Complex::getimag(){ return imag; }

void PLUS(Complex c1, Complex c2){
  Complex c3;
  double real = c1.getreal()+c2.getreal();
  double imag = c1.getimag()+c2.getimag();
  c3.set(real, imag);
  c3.print();
}

void MINUS(Complex c1, Complex c2){
  Complex c3;
  double real = c1.getreal()-c2.getreal();
  double imag = c1.getimag()-c2.getimag();
  c3.set(real, imag);
  c3.print();
}

int main() {
  Complex c1;
  Complex c2;
  c1.set(12.0, 17.9);
  c2.set(5.0, -3.9);
  c1.print();
  c2.print();
  PLUS(c1, c2);
  MINUS(c1, c2);
}
