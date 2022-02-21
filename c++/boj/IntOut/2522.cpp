#include <iostream>

using namespace std;

int main(void) {
  int n = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i >= n-j-1) printf("*");
      else printf(" ");
    }
    printf("\n");
  }

  for(int i = 0; i < n-1; i++){
    for(int j = 0; j < n; j++){
      if(i < j) printf("*");
      else printf(" ");
    }
    printf("\n");
  }


  return 0;
}