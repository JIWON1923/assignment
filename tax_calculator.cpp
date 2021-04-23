#include <iostream>
#include <string>
using namespace std;

void get_input(int&, float&);
int main(){
  int money;
  float rate;
  get_input(money, rate);
  cout << money*rate << endl;
}
void get_input(int& m, float& r){
  cin >> m >> r;  
}
