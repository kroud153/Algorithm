#include <iostream>

using namespace std;

int main(void) {
  int n = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j< n; j++){
      if(i >= n-j-1){
        if(i == 0 || i == n-1) printf("*");
        else {
          if(j == n-i-1) printf("*");
          else printf(" ");
        }
      }else {
        printf(" ");
      }
    }
    for(int j = 0; j< n-1; j++){
      if(i > j){
        if(i == 0 || i == n-1) printf("*");
        else {
          if(j == i-1) printf("*");
          else printf(" ");
        }
      }
    }
    printf("\n");
  }
  return 0;
}