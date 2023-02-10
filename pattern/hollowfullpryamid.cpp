// //  pattern hollow full pyramid

//          *
//         * *
//        *   *
//       *     *
//      *       *
//     *         *
//    *           *
//   *             *
//  *               *
// *******************

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int row=0;row<n; row++){
        for(int col =0; col<n-row-1; col++){
           cout<<" ";
        }
        for(int col=0; col<2*row+1; col++){
            if(row==n-1 ||col==2*row  || col== 0){
                 cout<<"*";
           }

    
    else{
                 cout<<" ";
               }

        }

        cout<<endl;
    }
    
}
