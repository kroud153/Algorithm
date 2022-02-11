#include <iostream>

using namespace std;

int main(void) {
  int T,a,b = 0;
  scanf("%d",&T);
  for (int i = 0; i < T;i++) {
    scanf("%d %d",&a,&b);
    printf("Case #%d: %d + %d = %d\n",i+1,a,b,a+b);
  }
  return 0;
}