//  reverse the string 

#include<iostream>
#include<string>
using namespace std;

int getLength(char name[]){

    int length=0;
    int i=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }

    return length;
}

void reverseString(char name[]){
int start =0; 
int end = getLength(name)-1;

while(start<=end){
    swap(name[start], name[end]);
    start++;
    end--;
}

}
int main(){
    char name[50];
    cout<<"Enter the name : ";
    cin>>name;


reverseString(name);
cout<<"reverse the string " <<name;
return 0;
    
}