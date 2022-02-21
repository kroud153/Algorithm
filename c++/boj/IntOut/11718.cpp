#include <iostream>
#include <string>

using namespace std;

int main(void){
  // 첫 방식
  // string list;
  // while(1){
  //   getline(cin, list);
  //   if(list=="") break;
  //   cout << list << endl;
  // }
  // 두번째 scanf EOF
  // char str;
  // while(scanf("%c",&str) != EOF){
  //   printf("%c",str); //\n 넣으면 안됨.
  // }

  //세번째 scanf 정규식
  char str[110];
  while(scanf("%[^\n]\n",str)==1){
    printf("%s",str);
  }

  return 0;
}