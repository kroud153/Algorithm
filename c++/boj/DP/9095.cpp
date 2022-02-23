#include <iostream>

using namespace std;



int FSTSum(int n);
//int *dp_table;
int main(void){
  int T,n = 0;
  cin >> T;
  //dp_table = new int[T+1];
  for(int i = 0; i < T; i++){
    cin >> n;
    cout << FSTSum(n) << endl;
  }


  return 0;
}

int FSTSum(int n){
  int temp = 0;
  int first = 1;
  int second = 2;
  int third = 4;
  if (n == 1) return first;
  else if (n == 2) return second;
  else if (n == 3) return third;
  else{
  for(int i = 4; i <= n; i++){
    temp = first + second + third;
    first = second;
    second = third;
    third = temp;
  }
  }
  return temp;
}