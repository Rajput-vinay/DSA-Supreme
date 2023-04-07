// Binary Search

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr, int target){
    int start=0;
    int end=arr.size()-1;
    int mid =start + (end - start)/2;

    while(start!=end){
        if(arr[mid]==target){
            return mid;
        }

        else if(target<arr[mid]){
            end =mid-1;
        }

        else{
            start =mid+1;
        }
        mid = start +(end-start)/2;
    }
    return -1;
}

int main(){
    vector<int>arr{1,2,3,4,5,45,54,65,77};
    int target=54;
   
   int result = binarySearch(arr,target);

   if(result ==-1){
    cout<<"Element not found";
   }

   else{
    cout<<"Element found";
   }

   return 0;
}