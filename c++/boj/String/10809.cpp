#include <iostream>
#include <cstring>

using namespace std;

int main(void){

  string s;
  cin >> s;

  int list[26]={0,};
  int result[26]={0,};

  for(int i = 0; i < 26; i++){
    list[i] = -1;
    result[i] = -1;
  }

  for(int i = 0; i <s.size(); i++){
    if(s[i]-97 >= 0 && list[s[i]-97] == -1) {
      list[s[i]-97] = i;
    }
  }
  
  for(int i = 0; i < 26; i++){
    cout << list[i] << " ";
  }
  return 0;
}