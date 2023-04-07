// 34. Find First and Last Position of Element in Sorted Array
// Medium
// 16.4K
// 394
// Companies
// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
//
// If target is not found in the array, return [-1, -1].
//
// You must write an algorithm with O(log n) runtime complexity.
//
//
//
// Example 1:
//
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:
//
// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:
//
// Input: nums = [], target = 0
// Output: [-1,-1


class Solution {
public:

int firstOcc(vector<int>nums , int target){
    int s =0;
    int e= nums.size()-1;

    int mid = s +(e-s)/2;
    int ans =-1;
    while(s<=e){
        if (nums[mid]==target){
      ans = mid;
      e = mid-1;
        }
        else if( target>nums[mid]){
            s=mid+1;
        }
        else if(target<nums[mid]){
            e = mid-1;
        }

        mid = s+(e-s)/2;
    }
    return ans;
}

 int lastOcc(vector<int>nums, int target){
      int s =0;
    int e= nums.size()-1;

    int mid = s +(e-s)/2;
    int ans =-1;
    while(s<=e){
        if (nums[mid]==target){
      ans = mid;
      s = mid+1;
        }
        else if( target>nums[mid]){
            s=mid+1;
        }
        else if(target<nums[mid]){
            e = mid-1;
        }

        mid = s+(e-s)/2;
    }
    return ans;
 }
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int>result;
         int firstIndex=firstOcc(nums,target);
         int lastIndex=lastOcc(nums,target);

         result.push_back(firstIndex);
         result.push_back(lastIndex);

         return result;
    }
};
