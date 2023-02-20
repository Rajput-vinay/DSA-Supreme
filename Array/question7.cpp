//  find the Unique element ( Every element occur twice except one)

#include<iostream>
#include<vector>
using namespace std;

int findUniqueElement(vector<int>arr ){
   int ans =0;
   for(int i=0;i<arr.size();i++){
   ans = ans ^ arr[i];
   }
   return ans;
}

int main(){
    vector<int> arr{10,5,4,5,8,9,8,10,9};
    
//  print the array
    for(int i=0;i<arr.size();i++){
        cout<<arr[i] <<" ";
    }

cout<<endl;
int UniqueElement = findUniqueElement(arr);
cout<<"Unique Element of the array are : "<<UniqueElement;

    
}