#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string toBinary(char n){
  string s = "";
  int t = n - '0';

  if(t == 0) return "0";

  while(t != 0){
    s += to_string(t % 2);
    t = t / 2;
  }
  reverse(s.begin(),s.end());
  //cout << s << "\n";
  return s;
}

int main(void){

  string str;
  getline(cin,str);

  for(int i = 0; i < str.length(); i++){
    
    if(i == 0)
      cout << toBinary(str[i]);
    else{
      string temp = toBinary(str[i]);
      while (temp.size() != 3)
      {
        temp = '0' + temp;
        
      }
      cout << temp;
    }
  }



  return 0;
}