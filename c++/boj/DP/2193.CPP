#include <iostream>

using namespace std;

int main(void){
  
  int n = 0;
  cin >> n;
  long long dp_table[n+1] = {0,};
  dp_table[1] = 1;
  dp_table[2] = 1;
  for(int i = 3; i <= n; i++){
    dp_table[i] = dp_table[i-1] + dp_table[i-2];
  }
  cout << dp_table[n] << endl;

  return 0;
}