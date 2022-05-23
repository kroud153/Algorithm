#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void antinotation(string n, int b){
  long long c = 0;
  int num = n.size();
  int i = 0;
  while(num--){
    //long long temp = (n[num-1]-55) * pow(b,i++);
    int temp = n[num];
    if(temp > '9'){
      c = c + (temp -'A' + 10) * (int)pow(b,i++);
    }else{
      c = c + (temp - '0') * (int)pow(b,i++);
    }
    
    cout << num << i << " : "<< c << "\n";
  }
  cout << c << "\n";
}

int main(void){

  string N;
  int B;
  cin >> N >> B;

  antinotation(N,B);


  return 0;
}