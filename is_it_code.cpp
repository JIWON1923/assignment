#include <iostream>
#include <string>
using namespace std;

bool isCode(const string& c){ //code면 1(True), 아니면 0(False)을 반환
  int result = 1; // 거짓이면 0을 곱해 하나라도 거짓이라면 결과는 0이 됨.
  if ( c.size() != 6 ) result *= 0; // 길이가 6자인가 ?
  if ( isalpha(c[0]) == 0 or isalpha(c[1]) == 0) result *= 0; // 0번째, 첫번째 글자가 알파벳으로 이루어져있는지 확인
  if ( c.substr(2,6) < "0" and c.substr(0,2) > "9999") result *= 0; // 나머지 네 글자가 0과 9999 사이로 이루어져 있는지 확인 (숫자로 이루어져있는가?)
  return (bool)result;
}

int main() {
  string code;
  getline(cin, code); // 사용자에게 문자열 입력받음

  isCode(code) ? cout << "Code\n" : cout << "Not Code\n"; // 삼항연산자로 True면 Code, Fasle면 Not Code 출력.
}

 /*String 클래스의 메소드를 사용하여 문자열이 올바른 물품 번호인지 검사하는 프로그램
총 길이는 6자, 첫 두 자는 문자이며, 나머지는 숫자로 이루어져있음. 유효한 코드는 TV1523이 있음"*/
