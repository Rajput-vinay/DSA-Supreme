//     ********        ********
//    **********      **********
//   ************    ************
//  **************  **************
// *******************************
//  *****************************
//   ***************************
//    *************************
//     ***********************
//      *********************
//       *******************
//        *****************
//         ***************
//          *************
//           ***********
//            *********
//             *******
//              *****
//               ***
//                *



#include <iostream>
using namespace std;

int main() {
  // heart star pattern
  int size;
  cin>>size;

  for (int i = size / 2; i < size; i += 2) {
    // print first spaces
    for (int j = 1; j < size - i; j += 2) {
      cout << " ";
    }
    // print first stars
    for (int j = 1; j < i + 1; j++) {
      cout << "*";
    }
    // print second spaces
    for (int j = 1; j < size - i + 1; j++) {
      cout << " ";
    }
    // print second stars
    for (int j = 1; j < i + 1; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  // lower part
  // inverted pyramid

  for(int row =0;row<size; row++){
    for(int col =0; col<row  ; col++){
      cout<<" ";
    }

    for(int i =0; i< 2* size - 2* row -1 ;i++){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}