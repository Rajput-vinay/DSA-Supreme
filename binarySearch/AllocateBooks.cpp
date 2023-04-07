// // Allocate Books
//
// Problem Statement
//
// You are given an array ‘pages’ of integer numbers. In this array, the ‘pages[i]’ represents the number of pages in the ‘i-th’ book. There are ‘m’ number of students, and the task is to allocate all the books to the students.
//
// Allocate books in a way such that:
//
// Each student gets at least one book.
// Each book should be allocated to a student.
// Book allocation should be in a contiguous manner.
//
// You have to allocate the books to ‘m’ students such that the maximum number of pages assigned to a student is minimum.
//
// Try to solve this problem on your own before moving on to further discussion here.
//
// Let’s understand the problem statement through an example.
//
// Example
// Input
// Number of books = 4 and Number of students = 2
//
// pages[] = { 10,20,30,40}
//
// Output
//  60
//
// Explanation
// All possible ways of book allocation are shown in the below figure-
//
// // The minimum of the maximum number of pages assigned = min{90,70,60} = 60. Hence, the required answer is 60.




#include <bits/stdc++.h>

 bool isPossible(vector<int> arr, int n, int m, int mid){

     int pageSum =0;
     int studentCount = 1;

     for(int i = 0; i<n ; i++){
         if(pageSum+arr[i]<= mid){
             pageSum+=arr[i];
         }

         else{
              studentCount++;
             if( studentCount>m||arr[i]>mid){
                 return false;
             }
             pageSum= arr[i];
         }


     }
     return true;
 }





int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum =0;
int ans=-1;
    for(int i =0; i<n;i++){
        sum += arr[i];
    }
    int e = sum;

    while(s<=e){
        int mid = s +(e-s)/2;

        if(isPossible(arr,n ,m ,mid)){
            ans = mid;
            e=mid-1;
        }

        else{
            s = mid+1;
        }

    }
    return ans;
}
