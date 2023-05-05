#include<iostream>
#include<string.h>

using namespace std;

void solve(string& str , int s , int e){

    if(s>=e) return;

    swap(str[s],str[e]);

    solve(str,s+1,e-1);
}



int main(){
    string str = "l";

    int s = 0;
    int e = str.size()-1;

   solve(str, s ,e); 
   cout<<str;
}