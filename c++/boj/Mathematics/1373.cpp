#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(void){

string str;
getline(cin,str);

while(str.size() % 3 != 0){
  str = '0' + str;
}

string ans = "";
for(int i = 0; i < str.size(); i+= 3){
  int temp = 0;
  for(int j = i; j < i+3; j++){
    temp += (str[j]-'0')*pow(2,2-(j%3));
  }
  ans += to_string(temp);
}
for(int i = 0; i < ans.size(); i++){
  printf("%c",ans[i]);
}


return 0;
}