#include <iostream>
#define mod 10007
using namespace std;

int main(void){

  int n = 0;
  int dp_table[1001][10];
  cin >> n;

  for(int i = 0; i < 10; i++){
    dp_table[1][i] = 1;
  }

  for(int i = 1; i <= n; i++){
    for(int j = 0; j < 10; j ++){
      if(j == 0) 
        dp_table[i][j] = 1;
      else
        dp_table[i][j] = dp_table[i][j-1] + dp_table[i-1][j];
      dp_table[i][j] %= mod;
    }
  }
  int count = 0;
  for(int i = 0; i < 10; i++){
    count = (count + dp_table[n][i]) % mod;
  }
  cout << count << endl;
  return 0;
}