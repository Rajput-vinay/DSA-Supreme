//  count 0's and 1' in Array

#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1};
    int n = 20;
    int numZero = 0;
    int numOnes = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            numZero++;
        }
        if (arr[i] == 1)
        {
            numOnes++;
        }
    }

    cout << " Number of 1's present in this array  is " << numOnes<<endl;
    cout << "Number of 0's present in this array is " << numZero<<endl;

    return 0;
}

// output

// Number of 1's present in this array  is 8
// Number of 0's present in this array is 12