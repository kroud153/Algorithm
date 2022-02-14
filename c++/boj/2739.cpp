#include <iostream>

using namespace std;

int main(void){
  int n = 0;
  cin >> n;
  for(int i = 1; i <= 9; i++){

    printf("%d * %d = %d\n",n,i,n*i);
  }

  return 0;
}