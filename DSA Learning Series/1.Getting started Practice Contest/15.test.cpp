#include <iostream>
using namespace std;

int main()
{
  int rows, cols, i, j, k;

  cin >> rows;

  k = 1;
  for (i = 1; i <= rows; i++)
  {
    for (j = 1; j <= 5; j++, k++)
    {
      cout << " " << k;
    }

    cout << "\n";
  }

  return 0;
}