#include <iostream>

using namespace std;

int main(void){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(j <= i) printf("*");
      //else printf(" "); 공백 찍으면 안돼.
    }
    printf("\n");
  }
  return 0;
}