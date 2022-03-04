#include <iostream>
#include <vector>
#include <tuple>
#define SIZE 100000
using namespace std;

int buf[2][SIZE + 1] = {0, };
int dp[2][SIZE + 1] = {0, 1};

int StickerMax(int n){
  for (int i =0 ; i < n; i++){
    scanf("%d",&buf[0][i]);
  }
  for (int i =0 ; i < n; i++){
    scanf("%d",&buf[1][i]);
  }

  dp[0][0] = buf[0][0];
  dp[1][0] = buf[1][0];
  dp[0][1] = buf[0][1] + dp[1][0];
  dp[1][1] = buf[1][1] + dp[0][0];

  for(int i = 2; i < n; i++){
    dp[0][i] = buf[0][i] + max(dp[1][i-1], dp[1][i-2]);
    dp[1][i] = buf[1][i] + max(dp[0][i-1], dp[0][i-2]);
  }

  return max(dp[0][n-1], dp[1][n-1]);
}


int main(void) {
  int n = 0;
  int T = 0;
  cin >> T;
  for(int i = 0; i <T; i++){
    scanf("%d",&n);
    printf("%d\n", StickerMax(n));

  }
  return 0;
}