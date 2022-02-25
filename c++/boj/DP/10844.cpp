#include <iostream>
#define mod 1000000000
using namespace std;

int main(void)
{
  int N = 0;
  cin >> N;

  int dp_table[101][10];
  for (int i = 1; i < N+1; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (i == 1 && j == 0)
      {
        dp_table[i][j] = 0;
      }
      else if (i == 1 && j <= 9)
      {
        dp_table[i][j] = 1;
      }
      else
      {
        if (j == 0)
        {
          if (i == 2)
          {
            dp_table[i][j] = 1;
          }
          else
          {
            dp_table[i][j] = dp_table[i - 1][j] + dp_table[i - 1][j + 1] - 1;
          }
        }
        else if (j == 9)
        {
          dp_table[i][j] = dp_table[i - 1][j - 1] + dp_table[i - 1][j] - 1;
        }
        else
        {
          dp_table[i][j] = dp_table[i - 1][j - 1] + dp_table[i - 1][j];
        }
      }
      dp_table[i][j] % mod;
    }
  }
  int count = 0;
  for (int i = 0; i < 10; i++)
  {
    count = (count + dp_table[N][i]) % mod;
  }
  cout << count << endl;
  return 0;
}