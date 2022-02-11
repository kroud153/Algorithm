#include <iostream>
#include <string>

using namespace std;

int main(void) {
  // char str;
  // while(scanf("%c",&str) != EOF){
  //   printf("%c",str);
  // }
  // char str[110];
  // while(scanf("%[^\n]\n",str)){
  //   printf("%s\n",str);
  // }
  string s[110];
  while(1){
    for(int i = 0; i < 100; i++){
      getline(cin,s[i]);
    }
    for(int i = 0; i < 100; i++){
      cout << s[i] << endl;
    }
  }


  return 0;
}