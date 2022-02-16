#include <iostream>

using namespace std;

int main(void)
{
  int n = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i >= n - j - 1)
      {
        if (n % 2 == 0)
        {
          if ((i % 2 == 0 && j % 2 == 1) || (i % 2 == 1 && j % 2 == 0))
            printf("*");
          else
            printf(" ");
        }
        else if (n % 2 == 1)
        {
          if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
            printf("*");
          else
            printf(" ");
        }
      }
      else
        printf(" ");
    }
    for (int j = 0; j < n - 1; j++)
    {
      if (i > j)
      {
        if (n % 2 == 0)
        {
          if ((i % 2 == 0 && j % 2 == 1) || (i % 2 == 1 && j % 2 == 0))
            printf("*");
          else printf(" ");
        }
        else if (n % 2 == 1)
        {
          if ((i % 2 == 0 && j % 2 == 1) || (i % 2 == 1 && j % 2 == 0))
            printf("*");
          else 
          printf(" ");
        }
      }
      // else
      //   printf(" ");
    }
    printf("\n");
  }
  return 0;
}