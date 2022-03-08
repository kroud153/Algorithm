#include <iostream>
#define SIZE 1000
using namespace std;

int num[SIZE+1] = {0,};
int dpUp[SIZE+1] = {0,};
int dpDown[SIZE+1] = {0,};

void init(int n){
  for(int i = 1; i<=n; i++){
    scanf("%d",&num[i]);
    dpUp[i] = 1;
    dpDown[i] = 1;
  }
}

int bitonic(int n){
  for(int i = 1; i <= n ; i++){
    for(int j = 1; j <i ; j++){
      if(num[i] > num[j]){
        dpUp[i] = max(dpUp[i],dpUp[j]+1);
      }
    }
  }
  for(int i = n; i >= 1 ; i--){
    for(int j = n; j >= i ; j--){
      if(num[i] > num[j]){
        dpDown[i] = max(dpDown[i],dpDown[j]+1);
      }
    }
  }

  int mLength = 0;
  for(int i = 1; i <=n ;i++){
    if (mLength < dpDown[i] + dpUp[i]){
      mLength = dpDown[i] + dpUp[i]-1;
    }
  }
  return mLength;
}

int main(void){

  int n = 0;
  scanf("%d",&n);
  init(n);
  printf("%d",bitonic(n));
  return 0;
}