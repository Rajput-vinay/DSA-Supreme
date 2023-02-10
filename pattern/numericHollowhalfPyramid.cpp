//  Numeric Hollow Pyramid

// 1
// 1 2 
// 1   3 
// 1     4 
// 1       5 
// 1         6 
// 1           7 
// 1             8 
// 1               9 
// 1 2 3 4 5 6 7 8 9 10 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {

            if (row == 0)
            {
                cout << 1;
            }
            else if (row == n - 1)
            {
                cout << col + 1 << " ";
            }
            else
            {
                if (col == 0)
                {
                    cout << 1 << " ";
                }
                else if (col == row)
                {
                    cout << row + 1 << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}