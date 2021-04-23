#include <iostream>
#include <string>
using namespace std;

void add_tax(int& salary, float r = 0.2);

int main(){
  int salary = 5000000;
  float rate = 0.3;
  add_tax(salary, rate);
  //add_tax(salary);
  cout << salary << endl;
}

void add_tax(int& s, float r){
  s += s*r;
}
