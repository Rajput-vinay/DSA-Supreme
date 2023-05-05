#include<iostream>
#include<string>
using namespace std;

void findElement(string& s , int& n , int i, char& key, int& count){
    if(i>=n) return;

    if(s[i]==key)
    count++;
  

  findElement(s,n,i+1,key,count);

}


int main(){
string s = "hahahahahahha";
int n = s.length();
int i =0;
int count =0;
char key = 'a';
findElement(s,n,i,key,count);
cout<<count;
}