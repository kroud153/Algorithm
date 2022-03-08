#include <iostream>
#define SIZE 1000
using namespace std;

int main(void) {

  int n = 0;
  scanf("%d",&n);
  int num[SIZE+1] = {0,};
  int dp[SIZE+1] = {0,};

for(int i = 1; i <= n; i++){
  scanf("%d",&num[i]);
  dp[i] = 1;
}

  int mLength = 0;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j < i; j++){
      if(num[i] < num[j]){
        dp[i] = max(dp[i],dp[j]+1);
      }
    }
    if (mLength < dp[i]) mLength = dp[i];
  }

  printf("%d",mLength);

  return 0;
}