#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long CountNum(long long n){
  long long count = 0;
  while(n > 0){
    n = n/10;
    count++;
  }

  return pow(10,count);
}

int main(void){

  long long a,b,c,d;
  cin >> a >> b >> c >> d;

  long long sum1 = a*CountNum(b) + b;
  long long sum2 = c*CountNum(d) + d;

  //cout << CountNum(b) <<" "<< CountNum(d) << "\n";
  //cout << sum1 <<" "<< sum2 << "\n";
  cout << sum1 + sum2 << "\n";

  return 0;
}