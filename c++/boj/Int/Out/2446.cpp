#include <iostream>

using namespace std;

int main(void){
  int n = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i <= j) printf("*");
      else printf(" ");
    }
    for(int j = 0; j < n-1; j++){
      if(i < n-1-j) printf("*");
    }
    printf("\n");
  }
  for(int i = 1; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i >= n-j-1) printf("*");
      else printf(" ");
    }
    for(int j = 0; j < n; j++){
      if(i > j) printf("*");
    }
    printf("\n");
  }

  return 0;
}