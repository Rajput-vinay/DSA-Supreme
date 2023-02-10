
// Achieve Numeric Half pyramid pattern

// 1  
// 1  2 
// 1  2  3
// 1  2  3  4
// 1  2  3  4  5
// 1  2  3  4  5  6


#include<iostream>
using namespace std;
int main(){
  int rowCount;

  cout<<"Enter the rowCount : ";
    cin>> rowCount;

    for(int row =0; row<rowCount; row++){
      for(int col=0; col<row+1;col++){
        cout<< col +1;
      }
      cout<<endl;
    }
}