//  Maximum number in an Array

#include <iostream>
#include<limits.h>

using namespace std;

int main()
{
    int arr[] = {15, 54, 75, 12, 64, 42};
    int n = 6;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    cout << "Maximum Element of the Array : " <<maxi<< endl;
    return 0;
}

// output 
// Maximum Element of the Array : 75