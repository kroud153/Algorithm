#include <iostream>

using namespace std;

int main(void){
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if (i <= j) printf("*");
      else printf(" ");
    }
    printf("\n");
  }
  return 0;
}