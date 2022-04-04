#include <iostream>

using namespace std;

int main(void){

  //char s[101] = {0};
  string s;
  int n[26] = {0,};
  char e[26] = {'a','b','c','d','e','f','g','h','i','j'
  ,'k','l','m','n','o','p','q','r','s','t','u'
  ,'v','w','x','y','z'};
  // cin >> s;
  // cout << s << "\n";
  //scanf("%s",s);
  //printf("%s\n",s);
  cin >> s;
  for(int i = 0; i < 26; i++) n[i] = 0;

  for(int i = 0; i <100; i++){
    if(s[i] == 0) break;
    for(int j = 0; j <26; j++){
      if(s[i] == e[j]) {
        n[j]++;
        break;
      }
    }
  }
 // 아스키 ...
  for(int i = 0; i < 26; i++){
    cout << n[i] << " ";
  }

}