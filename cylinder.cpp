#include <iostream>
#include <string>
using namespace std;
#define PI 3.14

float cylinder (float r, float h = 1.0);
int main(){
  float r = 3.0;
  float h = 4.5;
  cout << cylinder(r) << endl;
}
float cylinder(float r, float h){
  float v;
  return (r*r*PI*h);
}
