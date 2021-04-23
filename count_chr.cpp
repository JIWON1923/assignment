#include <iostream>
#include <string>
using namespace std;
// 7번 문제 : 글자, 숫자, 공백문자 개수 세는 문제"
int main() {
  string str;
  int empty = 0, alpha = 0, digit = 0;
  getline(cin, str); // 공백 포함해서 입력받기

  for (char c : str){ // str 하나씩 탐색
    if(isdigit(c) != 0) digit += 1;
    else if(isalpha(c) != 0) alpha += 1;
    else if(isspace(c)) empty += 1;
  }

  cout << "공백문자 = " << empty;
  cout << "\n알파벳 = " << alpha;
  cout << "\n숫자 = " << digit;
}
