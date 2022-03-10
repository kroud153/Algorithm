#include <iostream>
#define SIZE 100000
using namespace std;

int num[SIZE+1] = {0,};
int dp[SIZE+1] = {0,};

void init(int n){
  for(int i = 1; i <=n; i++){
    scanf("%d",&num[i]);
  }
}

int relayMax(int n){
  int maxSum = num[1];
  dp[1] = num[1];
  for(int i = 2; i <= n; i++){
    dp[i] = max(num[i], dp[i-1]+num[i]);
    if(dp[i] > maxSum) maxSum = dp[i];
  }
  return maxSum;
}

int main(void){

  int n = 0;
  scanf("%d",&n);
  init(n);
  printf("%d",relayMax(n));

  return 0;
}