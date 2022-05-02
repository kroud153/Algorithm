#include <iostream>
#include <math.h>

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

void changeNum(long long a){
  for(int i = 0; i < a; i++){
    cout << 1;
  }

}

int main(void){

long long a, b = 0;
  cin >> a >> b;

  changeNum(gcd(a,b));

  return 0;
}