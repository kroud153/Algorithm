#include <iostream>
#include <string>

using namespace std;

int main(void){
  string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
  int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int x, y,dateDistance = 0;
  cin >> x >> y;
  for(int i = 0; i < x-1; i++){
    dateDistance += month[i];
  }
  dateDistance += y;
  //printf("%d %d\n",dateDistance,dateDistance % 7);
  cout << day[dateDistance % 7] << endl;

  return 0;
}