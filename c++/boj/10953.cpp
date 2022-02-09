#include <iostream>

using namespace std;

int main(void){
  int n, a, b= 0;
  char c = '0';
  //입력
  scanf("%d",&n);
  for(int i = 0; i< n; i++){
    scanf("%d %c %d",&a,&c,&b);
    cout << a+b << endl;
  }

  return 0;
}