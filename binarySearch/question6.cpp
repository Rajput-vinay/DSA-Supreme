// find the missing element

#include<iostream>
#include<vector>
using namespace std;

int searchMissingElement(vector<int>arr){

    int start =0;
    int end = arr.size()-1;

    int mid = start + (end - start)/2;

    while(start<=end){

        if (arr[mid]!=mid+1&&arr[mid -1]==mid){
            return mid +1;
        }

        else if(arr[mid]==mid+1){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

    mid = start +(end - mid)/2;
    }
    return -1;
}

int main(){

    vector<int> arr{1,2,3,4,5,6,7,8,9,10,11,13};
    
    int result= searchMissingElement(arr);
    cout<<"Missing element is"<<result;
}
