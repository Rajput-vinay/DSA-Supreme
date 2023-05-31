#include <iostream>

using namespace std;
int partition(int arr[], int s, int e)
{

    // step 1 choose pivot Element
    int pivotIndex = s;
    int pivotElement = arr[s];

    //  step 2 find pivot right position
    int count = 0;
    for (int x = s+1; x <= e; x++)
    {
        if (arr[x] <= pivotElement)
        {
            count++;
        }
    }
    // jab ma for loop sa bahar auega kab mera pass pivot ki right position hogi
    int rightIndex = s + count;

    //  step 3 swap the previous pivot index and new pivot Index
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    //  step 4;
    // check kar lo left m chote element hona chaiya
    // or check kar lo right m bade element hona chaiya
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {

        // left case chota element
        while (arr[i] <= pivotElement)
        {
            i++;
        }

        //  right m check kar la

        while (arr[j] > pivotElement)
        {
            j--;
        }

        // step 5
        // if we need to swap element
        // no need swap

        if (i < pivotIndex && j > pivotIndex)

            swap(arr[i], arr[j]);
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    //  base condition
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    // left side m chote element hona chaiya

    quickSort(arr, s, p - 1);
    //  right side m bade element hona chaiya

    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[] = {8, 3,10, 4, 1, 20, 50, 30};
    int n = 7;
    int s = 0;
    int e = n - 1;

    quickSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}