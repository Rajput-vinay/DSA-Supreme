#include<iostream>
#include<vector>
using namespace std;

void solveutility(vector<int>& arr,int start , int end){
 if(end > arr.size()-1)
 return;
    for(int i = start ; i<=end ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    solveutility(arr,start,end+1);
}
 void solve(vector<int>arr){

    for(int start = 0 ; start<arr.size() ; start++){
        int end = start;
         solveutility(arr,start,end);
    }
 }

int main(){
    vector<int>arr {1 ,2 ,3, 4 ,5};
int start =0;
  int end=0;
solve(arr);
    return 0;
}