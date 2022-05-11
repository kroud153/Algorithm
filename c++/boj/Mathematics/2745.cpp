#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void antinotation(string n, int b){
  int c = 0;
  int num = n.size();
  while(num--){
    c = c + n[num] * pow(b,num-1);
  }
}

int main(void){

  string N;
  int B;
  cin >> N >> B;




  return 0;
}