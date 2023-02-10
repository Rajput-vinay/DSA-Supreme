// Numeric Palindrome Equilateral Pyramid

//                   1
//                 1 2 1
//               1 2 3 2 1
//             1 2 3 4 3 2 1 
//           1 2 3 4 5 4 3 2 1
//         1 2 3 4 5 6 5 4 3 2 1
//       1 2 3 4 5 6 7 6 5 4 3 2 1 
//     1 2 3 4 5 6 7 8 7 6 5 4 3 2 1
//   1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1
// 1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row-1; col++){
            cout<<"  ";
        }
        int num=1;
        for(int col=0; col<row+1; col++){
            cout<<num<<" ";
            num++;
        }
           // one less than the previous number that's why decrement by 2 and not 1
        for(num = num - 2 ;num>=1;num--){
            cout<<num<<" ";
        }
        
        cout<<endl;
    }
}