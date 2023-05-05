// 

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int>arr{5,4,3,2,1};
    int n = arr.size();

    for(int i =0; i<n-1;i++){
        bool swapped = false;
        for(int j = 0;j<n - i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }

    //  printing the array

    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}