#include <iostream>

using namespace std;

int main(void) {
  int T, a, b = 0;
  cin >> T;
  for(int i =0; i<T; i++){
    cin >> a >> b;
    cout << "Case #" << i+1 << ": "<< a+b << endl;
  }
  return 0;
}