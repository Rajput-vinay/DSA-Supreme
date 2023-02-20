// move all  -ve no to one side of Array

#include <iostream>
#include <vector>
using namespace std;

void moveNegative(int arr[100] ,int n)
{
    int start = 0;
    int end = n-1;
    while (start <= end)
    {
        if (arr[start] < 0)
        {
            start++;
        }
        else if (arr[end] > 0)
        {
            end--;
        }
        else
        {
            swap(arr[start], arr[end]);
        }
    }
}

int main()
{
    int arr[100]={1,-2,5,-1,8,-5};
    int n =  sizeof(arr)/sizeof(int);

    moveNegative(arr ,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout<<endl;

    return 0;
}