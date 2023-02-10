

//  Alphabet Palindrome Pyramid

// A
// A  B  A
// A  B  C  B  A
// A  B  C  D  C  B  A
// A  B  C  D  E  D  C  B  A

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
            cout << (char)('A' + col);
        }
        for (int col = row; col >= 1; col--)
        {
            cout << (char)(col + 'A' - 1);
        }
       
        cout << endl;
    }
}