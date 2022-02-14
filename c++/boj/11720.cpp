#include <iostream>

using namespace std;

int main(void) {
  int N,total= 0;
  char temp;
  cin >> N;
  for(int i=0; i <N; i++){
    cin >> temp;
    total += temp-48;
  }
  cout << total << endl;
  return 0;
}