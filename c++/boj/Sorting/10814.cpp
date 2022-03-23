#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

struct people{
  int order;
  int age;
  string name;
}typedef P;

// bool compare(pair<int, string> a, pair<int, string> b){
//   return a.first < b.first;
// }

bool comp(P a, P b){
  if(a.age == b.age) return a.order < b.order;
  else return a.age < b.age;
}


//vector<pair<int,string>> v;
vector<P> v;
int main(void){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n = 0;
  // int a;
  // string b;
  scanf("%d",&n);

  for(int i = 1; i <= n; i++){
    
    //cin >> a >> b;
    //v.push_back({a,b});
    P n;
    cin >> n.age >> n.name;
    //cin >> num[i].age >> num[i].name;
    //num[i].order = i;
    n.order = i;
    v.push_back(n);
    
  }

  //sort(num+1, num+n+1,compare);
  // for(int i = 1; i <= n; i++){
  //   cout << num[i].age << " " << num[i].name << endl;
  // }
  sort(v.begin(),v.end(),comp);
  //stable_sort(v.begin(),v.end(),compare);

  // for(auto c : v){
  //   cout << c.first << " " << c.second << endl;
  // }

  for(auto c : v){
    cout << c.age << " " << c.name << endl;
  }

  return 0;
}