#include <iostream>


using namespace std;

int main(void){

  int a,b,c = 0;
  cin >> a >> b >> c;

  cout << (a+b) % c << "\n" << ((a%c) + (b%c))%c << "\n" << (a*b)%c << "\n" << ((a%c) * (b%c)%c);

  return 0;
}