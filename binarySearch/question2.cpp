// find the first occurrence of and element in array

#include <iostream>
#include <vector>

using namespace std;
int findFirstOccurrence(vector<int> arr, int target)
{

    int start = 0;
    int end = arr.size() - 1;

    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            // start = mid+1;
           end = mid-1;
        }
        else if (arr[mid] > target)
        {
              end = mid - 1;
        }
        else
        {
            
          
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 4, 4, 4, 4,  4, 4,  4, 4, 4, 4, 4, 5, 45, 54, 65, 77};
    int target = 4;
    int result = findFirstOccurrence(arr, target);

    cout << result;
    return 0;
}