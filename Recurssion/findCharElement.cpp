#include<iostream>
#include<string>
using namespace std;

void findElement(string s , int n , int i, char& key){
    if(i>=n) return;

    if(s[i]==key)
    cout<<i<<" ";
  

  findElement(s,n,i+1,key);

}


int main(){
string s = "Vinay";
int n = s.length();
int i =0;
char key = 'a';
findElement(s,n,i,key);
}