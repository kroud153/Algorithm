#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
  int n = 0;
  scanf("%d",&n);

  int num[n+1] = {0,};
  for(int i = 1; i <= n; i++){
    scanf("%d",&num[i]);
  }
  
  sort(num+1,num+n+1);
  for(int i = 1; i <=n; i++){
    printf("%d\n",num[i]);
  }


  return 0;
}