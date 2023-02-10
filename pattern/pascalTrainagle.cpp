// Pascal's Triangle Pattern
//  1
//  1 1
//  1 2 1
//  1 3 3 1
//  1 4 6 4 1
#include<iostream>
using namespace std;

int main()
{
    int n;
   cin>>n;
    for (int row= 0; row < n; row++)
    {
        int sum = 1;

        //  for space
        for (int col = 0; col < n-row-1; col++)
        {
            cout << " ";
        }

        // for print
        for (int col = 0; col<row+1; col++)
        {
            cout <<" "<< sum;
            sum = sum * (row - col) / (col + 1);
        }
     cout << endl;
    }

}
