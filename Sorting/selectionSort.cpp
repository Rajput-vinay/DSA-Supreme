#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr{5,4,3,2,1};
       int n = arr.size();
    //  selection Sort

    for(int i =0 ; i<n-1;i++){
        int minIndex =i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                // new minimum value store
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
        
    }
    //  printing
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" " ;
    }

    return 0;
}