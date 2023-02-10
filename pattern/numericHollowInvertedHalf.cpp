//  Numeric Hollow Inverted Half Pyramid
// 12345678910
// 2       10
// 3      10
// 4     10
// 5    10
// 6   10
// 7  10
// 8 10
// 910
// 10 


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int row=1; row<=n;row++){
        for(int col =row; col<= n;col++){
            if(row==1){
                cout<< col;
            }
            else if(col==row){
                cout<<row;
            }
            else if(col==n){
                cout<<n;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}