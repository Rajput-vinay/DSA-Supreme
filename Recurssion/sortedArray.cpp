#include<iostream>
#include<vector>
using namespace std;

bool sortedArray(vector<int>& arr ,int& n,int i){
    if(i==n-1) return true;

    if(arr[i+1]<arr[i])
    return false;

    sortedArray(arr,n,i+1);
}


int main(){
    vector<int>arr{10,20,30,40,50};
    int i=0;
    int n = arr.size();

    bool isSorted=sortedArray(arr,n,i);

    if(isSorted)
    cout<<"Array is sorted";
    else
    cout<<"Array is not sorted";

}