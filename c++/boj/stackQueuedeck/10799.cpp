#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){

  string str;
  stack <char> s;
  int count = 0;

  cin >> str;
  for(int i = 0; i < str.length();i++){
    if(str[i] == '(') s.push(str[i]);
    else if(str[i] == ')' && str[i-1] == '('){
      s.pop();
      count += s.size();
    }
    else{
      s.pop();
      count++;
    }
  }
  cout << count << "\n";

  return 0;
}