#include <iostream>

using namespace std;

long long gcd (long long a, long long b){
long long c = a % b;
  while(c != 0){
    a = b;
    b = c;
    c = a % b;
  }

  return b;
}

int changeNum(int a){
  int n = 1;
  while(a--){
    n += n*10;
  }
}

int main(void){

long long a, b = 0;
  cin >> a >> b;

  cout << gcd(a,b);

  return 0;
}