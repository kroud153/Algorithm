#include <iostream>

using namespace std;

int main(void){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i >= n-j-1) printf("*");
      else printf(" ");
    }
    for(int k = 0; k < n; k++){
      if(i > k) printf("*");
    }
    printf("\n");
  }
  return 0;
}