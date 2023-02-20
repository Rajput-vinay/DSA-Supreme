//  Reverse the array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {15, 45, 85, 1, 75, 42, 51};

    int n = 7;
    int s = 0;
    int e = n - 1;
    // before swapping
    cout << "before Swapping" << endl
         << endl;
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl
         << endl;

    //  swap the array
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    // print array
    cout << "After the swapping " << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


// output 
// before Swapping

// 15 45 85 1 75 42 51

// After the swapping

// 51 42 75 1 85 45 15