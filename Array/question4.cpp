// extreme print of Array
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 25, 5, 4, 6, 15};
    int n = 6;

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (s == e)
        {
            cout << arr[s] << " ";
        }
        else
        {
            cout << arr[s] << " " << arr[e] << " ";
        }
        s++;
        e--;
    }
    return 0;
}


// output 
// 12 15 25 6 5 4 