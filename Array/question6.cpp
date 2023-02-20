//  minimum of the number present in the array

#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int arr[] = {12, 15, 7, 8, 2, 6};
    int n = 6;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    cout << "Minimum Element of the array : " << mini;
    return 0;
}

// output 
// Minimum Element of the array : 2