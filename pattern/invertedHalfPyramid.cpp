// Achieve  the Inverted Half Pyramid pattern

// *  *  *  *  *  *
// *  *  *  *  *  
// *  *  *  *
// *  *  *
// *  *  
// *


#include<iostream>
using namespace std;
int main(){
  int rowCount;


  cout<<"Enter the rowCount : ";
    cin>> rowCount;



    for(int row =0; row<rowCount; row++){
      for(int col=0; col<rowCount-row;col++){
        cout<<"* ";
      }
      cout<<endl;
    }
}