//  convert upper case into lower case

#include<iostream>
#include<string.h>

using namespace std;
 
 void changeLowerToUpper(char name[]){
int n = strlen(name);
 for(int i=0;i<n;i++){
    name[i]=name[i]+'a' -'A';
 }

 }

int main(){
    char name[100] = "VINAY";
  changeLowerToUpper(name);

  cout<<" change upper case to lower  : "<< name;
  return 0;
}