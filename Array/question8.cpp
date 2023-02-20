//  union of 2 array

#include<iostream>
#include<vector>
using namespace std;

int unionOfElement(vector<int>arr1,vector<int>arr2,vector<int>arr3){
   
    //  copy the element in third array
    for(int i=0; i<arr1.size();i++){
        arr3.push_back(arr1[i]);
    }

    //  copy the second array element into the third element
    for(int i=0;i<arr2.size();i++){
        arr3.push_back(arr2[i]);
    }

    // print the final array 
    for(int i=0; i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
}


int main(){
    vector<int>arr1{1,5,8,7,9,4,6};
    vector<int>arr2{2,3,9,0};
    vector<int>arr3;

    //  print the first  array
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }

    cout<<endl;

    //  print the second array

    for(int i=0; i<arr2.size();i++){
        cout<<arr2[i]<< " ";
    }

    cout<<endl;

    unionOfElement(arr1,arr2,arr3);


}