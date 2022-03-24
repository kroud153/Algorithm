#include <iostream>
//#define SIZE 10001

using namespace std;



int main(void){

  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 0;
  int num[10001] = {0};
  cin >> n;
  
  for(int i = 0; i < n; i++){ 
    int val = 0;
    cin >> val;
    num[val]+=1;
  }

  for(int i = 1; i < 10001; i++){
    for(int j = 0; j < num[i]; j++) {
      cout << i << "\n";
    }
  }

  return 0;
}