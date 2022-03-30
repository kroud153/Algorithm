#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n,k = 0;
  cin >> n >> k;
  int num[n+1] = {0,};

  for(int i = 0; i < n; i++)
  {
    cin >> num[i];
  }

  sort(num,num+n);

  cout << num[k-1];

  return 0;
}