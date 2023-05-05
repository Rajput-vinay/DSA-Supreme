#include<iostream>
using namespace std;
bool solve(string& s,int start, int end){
if(start>=end) return true;

if(s[start]!=s[end]) {
return false;
}
return solve(s,start+1,end-1);
}

int main(){
    string s = "racecar";
    int start = 0;
    int end= s.size()-1;
   cout<< solve(s,start,end);
}