#include <iostream>

using namespace std;

int main(void){
  char str;
  int temp = 0;
  while(scanf("%c",&str) != EOF){
    temp++;
    cout << str;
    if(temp == 10){
      cout << endl;
      temp = 0;
    }
  }

  return 0;
}