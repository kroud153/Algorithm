#include <iostream>

using namespace std;

int main(void) {
  int n = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(n-j-1 <= i) printf("*");
      else printf(" ");
    }
    printf("\n");
  }
  return 0;
}