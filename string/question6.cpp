//  convert lower case into uppercase

#include<iostream>
#include<string.h>

using namespace std;
 
 void changeLowerToUpper(char name[]){
int n = strlen(name);
 for(int i=0;i<n;i++){
    name[i]=name[i]-'a' +'A';
 }

 }

int main(){
    char name[100] = "vinay";
  changeLowerToUpper(name);

  cout<<" change lower to upper case : "<< name;
  return 0;
}