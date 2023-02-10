
// Numeric Full Pyramid patter
//     1
//    2 3 2
//   3 4 5 4 3
//  4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 + row << " ";
        }
        // for(int col =row; col>=1;col--){
        //     cout<<col+row+1;
        // }
        for (int col = row; col >= 1; col--)
        {
            cout << col + row << " ";
        }
        cout << endl;
    }
}