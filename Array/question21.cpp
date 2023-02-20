//  Rotate the  90 

#include <iostream>
#include <vector>
using namespace std;

void transposeArray(vector<vector<int>> arr, int row, int col)
{

    int ans[100][100];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"Rotate the array :"<<endl;

    for(int i=0;i<row;i++){
        for(int j=row-1;j>=0;j--){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printArray(vector<vector<int>> arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = arr.size();
    int col = arr[0].size();
    printArray(arr, row, col);

    cout << "Transpose the matrix" << endl;
    transposeArray(arr, row, col);
}