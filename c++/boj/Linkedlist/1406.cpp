#include <iostream>
#include <string>

using namespace std;

class LinkedList{
  string s;
  int cursor = 0;
public:
  void display(int n){
    cin >> s;
    cin >> n; // 명령 
    int len = s.size();
    cursor = len;
    while(n--){
      string c;
      cin >> c;
      int len = s.size();
      if(c == "L"){
        if(cursor > 0) cursor--;
      }
      else if (c== "D"){
        if(cursor < len) cursor++;
      }
      else if(c=="B"){
        if(cursor > 0) {
          s.erase(cursor-1,1);
          cursor--;
        }
      }
      else if (c=="P"){
        string p;
        cin >> p;
        s.insert(cursor,p);
        cursor++;
      }
      //cout << s <<" "<<cursor<< "\n";
    }
    cout << s << "\n";
  }
};

int main(void){

  int n = 0;
  LinkedList L;
  L.display(n);



  return 0;
}