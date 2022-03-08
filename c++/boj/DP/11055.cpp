#include <iostream>
#define SIZE 1000
using namespace std;

int main(void){
  int n = 0;
  scanf("%d",&n);
  int num[n+1] = {0,};
  int dp[n+1] = {0,};
  int maxCount = 0;
  for(int i = 1; i <= n; i++){
    scanf("%d",&num[i]);
  }

  for(int i = 1; i <= n; i++){
    dp[i] = num[i];
    for(int j = 1; j < i; j++){
      if(num[i] > num[j]){
      dp[i] = max(dp[i],dp[j]+num[i]);
      }

    }
    if (dp[i] > maxCount) maxCount = dp[i];
  }
  cout << maxCount << endl;
  return 0;
}