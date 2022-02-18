#include <iostream>
#include <algorithm>

using namespace std;

int insertTable(int table[], int maxN);

int main(void){
  int result,N = 0;
  cin >> N;
  int * table = new int[N+1];

  result = insertTable(table, N);
  cout << result;
  delete [] table;
  return 0;

}

int insertTable(int table[], int maxN){
  int count = 0;
  int temp2, temp3 = 0;
  for(int i = 1; i < maxN+1; i++){
    if(i == 1) table[i] = 0;
    else{
      if(i % 2 == 0){
        temp2 = table[i / 2] + 1;
      }else{
        temp2 = maxN;
      }
      if(i % 3 == 0){
        temp3 = table[i / 3] + 1;
      }else{
        temp3 = maxN;
      }
      int tmin = min(temp2, temp3);
      table[i] = min(table[i - 1] + 1, tmin);
    }
  }
  return table[maxN];

}