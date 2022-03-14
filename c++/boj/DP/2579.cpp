#include <iostream>
#define SIZE 301
using namespace std;

int n;
int Num[SIZE];
int DP[SIZE];

int solution(){
  DP[1] = Num[1];
  DP[2] = Num[1] + Num[2];
  DP[3] = max(Num[1] + Num[3], Num[2]+Num[3]);
  for(int i = 4; i <= n; i++){
    DP[i] = max(DP[i-2] + Num[i], DP[i-3]+Num[i-1]+Num[i]);
  }

  return DP[n];
}

int main(void){

  scanf("%d",&n);
  for(int i = 1; i<= n; i++){
    scanf("%d",&Num[i]);
  }

  printf("%d",solution());
  return 0;
}