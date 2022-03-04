#include <iostream>
#include <algorithm>
#define SIZE 10000
using namespace std;

int podo[SIZE+1]= {0,};
int dp[SIZE+1]= {0,};

int maxPodo(int n){
  int current = 0;
  dp[1] = podo[1];
  dp[2] = max(dp[1],podo[1]+podo[2]);
  for(int i = 3; i <= n; i++){
    current = max(podo[i-1]+podo[i]+dp[i-3],podo[i]+dp[i-2]);
    dp[i] = max(current, dp[i-1]);
  }
  return dp[n];
}

int main(void){
  
  int n = 0;
  scanf("%d",&n);
  for(int i = 1; i <= n; i++){
    scanf("%d",&podo[i]);
  }
  int maxCount = maxPodo(n);
  printf("%d",maxCount);

  return 0;
}