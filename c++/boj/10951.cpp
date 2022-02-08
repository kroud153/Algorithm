#include <iostream>

using namespace std;

int main(void){
  int a, b = 0;
  while(cin >> a >> b){
    // if((cin >> a >> b).eof()){
    //   printf("1");
    // }
    printf("%d",a+b);
  }
  printf("한글 입출력 테스트입니다.");
  return 0;
}