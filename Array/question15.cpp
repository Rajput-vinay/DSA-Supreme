// sum of row

#include <iostream>
using namespace std;

int sumOfRow(int arr[][3], int row, int col)
{
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;

    int sum;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout <<"sum of the array row number"<<i+1 <<" : "<< sum;
        cout << endl;
    }
}