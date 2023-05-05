#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> arr{10, 7, 6, 14, 9};
    int n = arr.size();

    for (int round = 1; round < n; round++)
    {
        int val = arr[round];
        int j = round - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > val)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = val;
    }

    //  printing

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}