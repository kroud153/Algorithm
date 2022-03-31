#include <iostream>
#include <stack>

using namespace std;

class handler {
  stack<int> s;

void push(int x){
  s.push(x);
}
void pop(){
  if(s.empty()){
    cout << -1 << "\n";
  }else {
    cout << s.top()<< "\n";
    s.pop();
  }
}
void size(){
  cout << s.size()<< "\n";
}
void empty(){
  if(s.empty()){
    cout << 1<< "\n";
  }else{
    cout << 0<< "\n";
  }
}
void top(){
  if(s.empty()){
    cout << -1 << "\n";
  }else {
    cout << s.top() <<"\n";
  }
}

public:
  void display(int n){
    string s;
    while(n--){
      cin >> s;
      if(s == "push"){
        int x;
        cin >> x;
        push(x);
      }
      else if(s == "pop"){
        pop();
      }
      else if(s == "size"){
        size();
      }
      else if(s == "empty"){
        empty();
      }
      else if(s == "top"){
        top();
      }
    }
  }
};


int main(void){

  handler h;
  int n;
  cin >> n;
  h.display(n);


  return 0;
}