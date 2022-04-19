#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void){

  int N, K = 0;
  cin >> N >> K;
  vector <int> v;

  for(int i = 0; i < N; i++){
    v.push_back(i+1);
    //cout << v[i] << "\n";
  }
  int temp = 0;
  cout << "<";
  for(int i = 0; i < N; i++){
    
    temp = (temp + K-1) % v.size();
    
    if(i == N-1) cout << v[temp];
    else cout << v[temp] << ", ";
    v.erase(v.begin()+temp);
  }
  cout << ">";

  return 0;
}