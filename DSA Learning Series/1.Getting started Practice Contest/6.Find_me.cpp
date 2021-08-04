/*
You are given a list of N integers and a value K. Print 1 if K exists in the given list of N integers, otherwise print −1.

Input:
First-line will contain two numbers N and K.
Next line contains N space-separated numbers.
Output:
Print the answer in a new line.

Constraints
1≤N,K,Ai≤105
Sample Input 1:
4 2
1 2 3 4
Sample Output 1:
1
Sample Input 2:
4 4
1 2 6 9
Sample Output 2:
-1
EXPLANATION:
In the first example, as 2 is present in the list.
In the second example, 4 is not present in the list.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, i;
  cin >> n >> k;

  vector<int> a(n);
  for (i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  bool found = false;
  for (i = 0; i < n; i++)
  {
    if (a[i] == k)
    {
      found = true;
      break;
    }
  }

  if (found)
  {
    cout << 1 << endl;
  }
  else
  {
    cout << -1 << endl;
  }
}