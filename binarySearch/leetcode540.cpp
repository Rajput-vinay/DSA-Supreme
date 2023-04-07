// 540. Single Element in a Sorted Array
//
// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
//
// Return the single element that appears only once.
//
// Your solution must run in O(log n) time and O(1) space.
//
//
//
// Example 1:
//
// Input: nums = [1,1,2,3,3,4,4,8,8]
// Output: 2
// Example 2:
//
// Input: nums = [3,3,7,7,10,11,11]
// Output: 10



class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     int s = 0;
     int e = nums.size()-1;

     int mid = s + (e-s)/2;

     while(s< e){

         if(mid%2==0){

             if(nums[mid]==nums[mid+1]){
                 s = mid+2;

             }
             else
             e = mid;
         }

         else{
             if (nums[mid]==nums[mid-1]){
                 s = mid +1;
             }
             else
             e = mid -1;
         }
         mid = s + (e-s)/2;
     }
     return nums[e];
    }
};
