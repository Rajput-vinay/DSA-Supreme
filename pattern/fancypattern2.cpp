// fancy pattern 2 


// 3
// 44
// 555
// 6666
// 555
// 44
// 3


#include<iostream>

using namespace std;
int num =3;
int main(){
    int n;
    cin>>n;

    for(int row =0;row<n;row++){
        
        for(int col =0;col<row+1;col++){
            cout<< num + row;
        }
        
        cout<<endl;
    }

    for(int row =0; row<n; row++){
        for(int col =row-1; col>=1;col--){
        cout<<n-row;
        }
        cout<<endl;
    }
}