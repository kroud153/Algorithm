#include <iostream>
#include <algorithm>
#define SIZE 100001

using namespace std;

bool comp(long long a, long long b){
  return a < b;
}

int main(void){

  int N = 0;
  cin >> N;
  long long card[SIZE] = {0,};

  for(int i = 0; i <N; i++){
    long long n;
    cin >> card[i];
  }

  sort(card,card+N,comp);
  long long maxCount;
  int mCount = 1;
  int Ccount = 1;
  maxCount = card[0];
  for(int i = 1; i < N; i++){
    //cout << card[i] << "\n";
    
    if(card[i-1] != card[i]) Ccount = 1;
    else {Ccount += 1;}

    if(mCount < Ccount){
      maxCount = card[i];
      mCount = Ccount;
    }
  }


  cout << maxCount;

  return 0;

}