#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  int n,number = 0;
  scanf("%d",&n);
  int maxM = -1000001;
  int minM = 1000001;
  for(int i=0; i<n; i++){
    scanf("%d",&number);
    maxM = max(number, maxM);
    minM = min(number, minM);
    //printf("[%d]. %d %d\n",i,minM,maxM);
  }
  printf("%d %d",minM,maxM);
  return 0;
}