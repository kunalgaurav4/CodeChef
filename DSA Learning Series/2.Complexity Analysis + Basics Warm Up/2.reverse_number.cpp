#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];

  int rev = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    rev = rev * 10 + arr[i] % 10;
    arr[i] = arr[i] / 10;
  }
  cout << rev << endl;
}