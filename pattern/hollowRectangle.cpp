
// Achieve Hollow Rectangle parttern
//
// *  *  *  *  *  *  *
// *                 *
// *                 *
// *                 *
// *  *  *  *  *  *  *


#include<iostream>
using namespace std;

int main(){
  int rowCount;
  int colCount;

  cout<<"Enter the rowCount : ";
  cin>> rowCount;

  cout<<"Enter the colCount : ";
  cin>>colCount;

  for(int row=0;row<rowCount;row++){
    if(row==0 || row==rowCount-1){
      for(int col=0;col<colCount;col++){
        cout<<"* ";
      }
    }
    else{
      cout<<"* ";
      for(int row=0;row<colCount-2;row++){
        cout<<"  ";
      }
      cout<<"* ";
    }
    cout<<endl;
  }
}
