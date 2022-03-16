#include <iostream>
#include <algorithm>
#define SIZE 100001
using namespace std;

int n;
int dp[SIZE] = {0,};

int main(void){
  scanf("%d",&n);
  for(int i = 1; i <= n; i++){
    dp[i] = i;
    for(int j = 1; j*j <= i; j++){
      dp[i] = min(dp[i],dp[i-j^2]+1);
    }
  }

  printf("%d",dp[n]);

  return 0;
}