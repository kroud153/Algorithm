#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string toBinary(string n){
  string s = 0;
  int t = stoi(n);
  while(t / 2){
    s += to_string(t % 2 + '0');
    n = t / 2;
  }
  cout << s << "\n";
  return s;
}

int main(void){

  string str;
  getline(cin,str);

  toBinary(str);



  return 0;
}