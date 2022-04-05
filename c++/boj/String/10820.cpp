#include <iostream>
#include <string>

using namespace std;

struct Count{
  int min = 0;
  int max = 0;
  int num = 0;
  int space = 0;
};

int main(void){

  string s;
  Count c;
  while(getline(cin, s)){
    c.max = c.min = c.num = c.space = 0;
    for(int j = 0; j < s.size(); j++){
      if( s[j] <= 'z' && s[j] >= 'a' ) c.min++;
      if( s[j] <= 'Z' && s[j] >= 'A' ) c.max++;
      if( s[j] <= '9' && s[j] >= '0') c.num++;
      if( s[j] == ' ') c.space++;
     }

    cout << c.min << " "<<  c.max << " " << c.num << " "<< c.space <<"\n";
  }
  

  return 0;
}