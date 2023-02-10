


// Achieve that pattern through the code

// * * * * * * *
// * * * * * * *
// * * * * * * *
// * * * * * * *

#include<iostream>
using namespace std;

int main(){
  int rowCount;
  int colCount;
  cout<< "Enter the rowcont : ";
  cin>> rowCount;
  cout<<" Enter the colCount: ";
  cin>>colCount;
  for(int row = 0;row<colCount;row++){
    for(int col = 0; col < colCount;col++){
      cout<<"* ";
    }
    cout<<endl;
  }
}
