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

bool compare(P a,P b){
  if(a.age == b.age) return a.order < b.order;
  else return a.age < b.age;
}

vector<P> v;
int main(void){

  int n = 0;
  scanf("%d",&n);

  for(int i = 1; i <= n; i++){
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
  sort(v.begin(),v.end(),compare);

  for(auto c : v){
    cout << c.age << " " << c.name << endl;
  }

  return 0;
}