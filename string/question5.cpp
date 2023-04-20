//  palindrome string

#include<iostream>
#include<string.h>
using namespace std;

bool isPalindrome(char name[]){
    int start =0;
    int end = strlen(name) -1;

    while(start<=end){

        if(name[start]!= name[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
        return true;
    }
    
}

int main(){
char name[100]="noon";

cout<<"check palidrome : "<<isPalindrome(name);

}