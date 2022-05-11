#include <iostream>
#include <string>

using namespace std;

char mod[36] = {'0','1','2','3','4','5','6','7','8','9',
'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
'O','P','Q','R','S','T','U','V','W','X','Y','Z'}; 

void bmod(int n, int b){
  int c = n / b;
  int d = n % b;
  string str = "";
  str.insert(0,1,mod[d]);
  while(c != 0){
    n = c;
    c = n / b;
    d = n % b;
    str.insert(0,1,mod[d]);
  }
  cout << str << "\n";
}


int main(void){
  int N,B = 0;
  cin >> N >> B;

  bmod(N,B);
  return 0;
}