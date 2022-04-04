#include <iostream>
#include <deque>
#include <string>

using namespace std;

class Deque {

deque <int> d;
public:
  void display(int n){
    string s;
    cin >> n;
    while(n--){
      cin >> s;
      if(s == "push_front"){
        int x = 0;
        cin >> x;
        d.push_front(x);
      }
      else if(s == "push_back"){
        int x = 0;
        cin >> x;
        d.push_back(x);
      }
      else if(s == "pop_front"){
        if(d.empty()) cout << -1 << "\n";
        else {
          cout << d.front() << "\n";
          d.pop_front();}
      }
      else if(s == "pop_back"){
        if(d.empty()) cout << -1 << "\n";
        else {
          cout << d.back() << "\n";
          d.pop_back();}
      }
      else if(s == "size"){
        cout << d.size() <<"\n";
      }
      else if(s == "empty"){
        if(d.empty()) cout << 1 << "\n";
        else cout << 0 << "\n";
      }
      else if(s == "front"){
        if(d.empty()) cout << -1 << "\n";
        else cout << d.front() << "\n";
      }
      else if(s == "back"){
        if(d.empty()) cout << -1 << "\n";
        else cout << d.back() << "\n";
      }
    }
  }

};

int main(void){
  int n = 0;
  Deque d;
  d.display(n);

  return 0;
}