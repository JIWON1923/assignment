#include <iostream>
#include <string>
using namespace std;

int main(){
  string str;
  getline (cin, str);
  bool chr = false; // 공백문자 false, 일반 문자 true로 계산
  int result = 0;

  for (char c : str){
    if (chr == false and isspace(c) == 0){
      result += 1;
      chr = true;
    } // 공백에서 문자로 바뀌는 순간 단어 1개
    if (isspace(c) != 0) chr = false;
  }
  cout << result << endl;
  
}
