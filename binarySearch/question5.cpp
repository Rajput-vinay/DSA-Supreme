// peak element in a mountain Array
// leet code question;


#include<iostream>
#include<vector>

using namespace std;

int peakElement(vector<int>arr){
    int start =0; 
    int end = arr.size()-1;

    int mid = start +(end -start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else {
            end = mid;
        }
        mid = start + (end -mid)/2;

    }
    return start;
    // return end;
}


int main(){

    vector<int> arr{1,10,5,2};
    
int result = peakElement(arr);
cout<<"Index"<<result; // its give the index number of largest element 
return 0;
}0
















































































































































