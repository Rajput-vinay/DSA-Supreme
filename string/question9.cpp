//  compare two string 

#include<iostream>
#include<string>

using namespace std;

bool comparingString(string a , string b){

    if(a.length()!=b.length()){
        return false;
    }
      else{
        for(int i =0;i<a.length();i++){
            if(a[i]!=b[i]){
                return false;
            }
            return true;
        }
      }
}

int main(){
string a ;
 cout<<"enter the string a ";
 getline(cin,a);
    string b;
    cout<<"enter the string b ";
    getline(cin,b);

 cout<<comparingString(a,b);
    
}