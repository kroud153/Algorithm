#include <iostream>
#include <queue>
#include <string>

using namespace std;

class Classq{
  queue <int> q;
public:
  void display(int n){
    cin >> n;
    string str;
    while(n--){
      cin >> str;
      if(str == "push"){
        int x;
        cin >> x;
        q.push(x);
      }
      else if(str == "pop"){
        if(q.empty()) cout << -1 << "\n";
        else{
          cout << q.front() << "\n";
          q.pop();
        }
      }
      else if(str == "size"){
        cout << q.size() << "\n";      
      }
      else if(str == "empty"){
        if(q.empty()) cout << 1 << "\n";
        else cout << 0 << "\n";
      }
      else if(str == "front"){
        if(q.empty()) cout << -1 << "\n";
        else{
          cout << q.front() << "\n";
        }
      }
      else if(str == "back"){
        if(q.empty()) cout << -1 << "\n";
        else{
          cout << q.back() << "\n";
        }
      }
    }
  }
};

int main(void){

  Classq q;
  int n;
  q.display(n);


  return 0;
}
