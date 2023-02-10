

// Achieve the full pyramid pattern
//
// *  *  *  *  *  *
//  *  *  *  *  *
//   *  *  *  *
//     *  *  *
//       *  *
//         *


#include<iostream>
using namespace std;

int main(){
  int rowCount;

 cout<<"Enter the rowCount : ";
 cin>>rowCount;
  for(int row =0;row<rowCount; row++){
    for(int col =0; col<row  ; col++){
      cout<<" ";
    }

    for(int i =0; i< rowCount -row ;i++){
      cout<<"* ";
    }


    cout<<endl;
  }
}
