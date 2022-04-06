#include <iostream>
#include <string>

using namespace std;

int main(void){

  string s;
  getline(cin,s);

  for(int i = 0; i < s.size(); i++){
    if(s[i] >= 'a' && s[i] <= 'z'){
      s[i] = 'a' + (s[i]-97 + 13) % 26;
    }
    else if(s[i] >= 'A' && s[i] <= 'Z'){
      s[i] = 'A'+ (s[i]-65 + 13) % 26;
    }
  }

  cout << s << "\n";

  return 0;
}