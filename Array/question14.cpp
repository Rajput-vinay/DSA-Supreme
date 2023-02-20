// col wise print the array

#include<iostream>
using namespace std;
void printArrayColWise(int arr[][3],int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;

    printArrayColWise(arr,row,col);
}

// output
// 1 4 7 
// 2 5 8
// 3 6 9