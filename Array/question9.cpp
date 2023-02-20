// Intersection of 2 array

#include<iostream>
#include<vector>

using namespace std;
void intersectionOfArray(vector<int>arr,vector<int>arr1,vector<int>arr2){
    for(int i=0;i<arr.size();i++){
       int element =arr[i];
        for(int j=0;j<arr1.size();j++){
            if(arr[i]==arr1[j]){
                arr[j]=-1;
                arr2.push_back(element);
            }
        }
    }
    // //print ans 
	for(auto value: arr2) {
		cout << value << " ";
	}
}

int main(){
    vector<int> arr{1,2,3,5,4,6};
    vector<int>arr1{1,2,5,7,8,9};
    vector<int>arr2;

    // print the arr


    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // print the arr1
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    intersectionOfArray(arr,arr1,arr2);
}