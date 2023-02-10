

// fancy pattern 1
//
// 1
// 2 * 2
// 3 * 3 * 3
// 4 * 4 * 4 * 4
// 4 * 4 * 4 * 4
// 3 * 3 * 3
// 2 * 2
// 1

#include <stdio.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < row + 1; col++)
    {
      cout << row + 1;

      // condition for printing star
      if (col != row)
      {
        cout << "*";
      }
    }
    cout << endl;
  }
}
