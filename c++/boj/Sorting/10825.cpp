#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct student{
  int kor;
  int eng;
  int math;
  string name;
} typedef STD;

int comp(STD a, STD b){
  if(a.kor == b.kor && a.eng == b.eng && a.math == b.math) return a.name < b.name;
  else if(a.kor == b.kor && a.eng == b.eng) return a.math > b.math;
  else if(a.kor == b.kor) return a.eng < b.eng;
  else return a.kor > b.kor;
}

int main(void){

  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  vector<STD> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
  }

  sort(v.begin(), v.end(),comp);

  for(auto c : v){
    cout << c.name << "\n";
  }

return 0;

}