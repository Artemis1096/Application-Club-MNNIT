#include <iostream>
using namespace std;

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int n, k;
    cin >> n;
    int count = 0;
    int min = 10;
    k = n;
    while (k > 0)
    {
      count++;
      if (k % 10 < min)
      {
        min = k % 10;
      }
      k /= 10;
    }
    if (count == 2)
    {
      cout << (n % 10) << endl;
    }
    else
    {
      cout << min << endl;
    }
  }
  return 0;
}
