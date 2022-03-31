#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){

  stack <char> s;
  int t = 0;
  int check = 0;
  string str;
  cin >> t;

  for(int i = 0; i < t; i++){
    str = ' ';
    cin >> str;
    for(int i = 0; i < str.length(); i++){
      char c = str[i];
      if(c == '(') {
        s.push(c);
        }
      else if(c == ')') {
        if(s.empty()) {
          check = 1;
          break;
        }else{
          s.pop();
        }
      }
    }
    if(s.empty() && check == 0) {cout << "YES" << "\n";}
    else {cout << "NO" << "\n";}
    while(!s.empty()) s.pop();
    check = 0;
  }

  return 0;
}