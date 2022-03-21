#include <iostream>
#include <algorithm>
using namespace std;

struct grid{
int x;
int y;
} typedef GRID;

int compare(GRID a, GRID b){
  if(a.x == b.x) return a.y < b.y;
  else return a.x < b.x;
}

int main(void){

  int n = 0;
  scanf("%d",&n);

  GRID num[n+1] = {0,};
  for(int i = 1; i <=n;i++){
    scanf("%d %d",&num[i].x, &num[i].y);
  }
  sort(num+1,num+n+1,compare);

  for(int i = 1; i <=n;i++){
    printf("%d %d\n",num[i].x, num[i].y);
  }

  return 0;
}