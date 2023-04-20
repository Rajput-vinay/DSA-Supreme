//  find length of string

#include<iostream>
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

int main(){
    
    char name[50];
    cout<<"Enter the name : ";
    cin.getline(name,40);

    int result = getLength(name);
    cout<<"length of string "<<result<<endl;

    return 0;
}