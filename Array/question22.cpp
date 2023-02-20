// wave print

#include <iostream>
#include<vector>
using namespace std;

void wavePrint(vector<vector<int>> arr, int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j]<<" ";
            }
        }
        else{
            for(int j=col-1;j>0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
int main()
{
    vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int row=arr.size();
int col=arr[0].size();
    wavePrint(arr, row, col);
}
