#include <iostream>

using namespace std;

int gcd(int a, int b){
  int c = a % b;
  while(c != 0){
    a = b;
    b = c;
    c = a % b;
  }

  return b;
}

int lcm (int a , int b){
  return (a * b) / gcd(a,b);
}


int main(void){

  int a, b = 0;
  int n = 0;
  cin >> n;

  while(n--){
    cin >> a >> b;
    cout << lcm(a,b) << "\n";
  }
  

  return 0;
}