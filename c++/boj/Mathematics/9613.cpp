#include <iostream>

using namespace std;

const int MAX = 100;

int arr[MAX];

int gcd(int a, int b){
  int c = a % b;
  while(c != 0){
    a = b;
    b = c;
    c = a % b;
  }

  return b;
}

int main(void){

  int t = 0;
  cin >> t;

  for(int i = 0; i < t; i++){
    int n = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }
    long long sum = 0;
    for(int i = 0; i < n; i++){
      for(int j = i+1; j < n; j++){
        sum += gcd(arr[i],arr[j]);
    }
    }
    cout << sum << "\n";
  }


  return 0;
}