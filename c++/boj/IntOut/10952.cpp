#include <iostream>

using namespace std;

int main(void){
  int a,b = 0;
  while(cin >> a >> b && a != 0 && b != 0){
    cout << a+b << endl;
  }
  return 0;
}