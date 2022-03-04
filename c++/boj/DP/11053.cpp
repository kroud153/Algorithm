#include <iostream>
using namespace std;



int main(void){

  int n = 0;
  scanf("%d",&n);
  int number[n+1] = {0,};
  int dp[n+1] = {0,};

  for(int i = 1; i <= n; i++){
    scanf("%d",&number[i]);
  }

  dp[0] = 0;
  int maxCount = 0;
  for(int i = 1; i<= n; i++){
    for(int j = 0; j <=i; j++){
      if(number[i] > number[j]) {
        dp[i] = max(dp[i], dp[j]+1);
    }
    }
    if(dp[i] > maxCount) maxCount = dp[i];
  }
  printf("%d",maxCount);

  return 0;
}