#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){

  string s;
  string sub[1001];
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    sub[i] = s.substr(i,s.size()-i);
  }

  sort(sub,sub+s.size());

  for(int i = 0; i < s.size() ; i++){
    cout << sub[i] << "\n";
  }

  return 0;
}
