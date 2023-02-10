// Achieve the full pyramid pattern

  //           *
  //         *   *
  //       *   *   *
  //     *   *   *   *
  //   *   *   *   *   *
  // *    *   *   *   *   *


  #include<iostream>
  using namespace std;

  int main(){
    int rowCount;
  
   cout<<"Enter the rowCount : ";
   cin>>rowCount;
    for(int row =0;row<rowCount; row++){
      for(int col =0; col<rowCount-1-row  ; col++){
        cout<<" ";
      }
  
      for(int col =0; col< row +1 ;col++){
        cout<<"* ";
      }
  
  
      cout<<endl;
    }
  }


