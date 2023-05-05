#include<iostream>
#include<string.h>
using namespace std;

void findSubsequential(string str, int i ,string newString){
    // base case

    if(i>=str.length()){
     cout<<newString<<" ";
     return;
    }

    //  exclude string
      findSubsequential(str,i+1,newString);

    //  include string;
     newString.push_back(str[i]);
    findSubsequential(str ,i+1,newString );
}



int main(){
    string str = "abc";
    string newString ="";

    int i =0;

    findSubsequential(str,i,newString);
  return 0;
}