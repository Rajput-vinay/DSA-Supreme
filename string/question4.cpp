//  Replace space with @ 

#include<iostream>
#include<string.h>

using namespace std;


void replaceSentence(char sentence[]){
    
    int n = strlen(sentence);

    for(int i=0;i<n;i++){
        if(sentence[i]==' '){
            sentence[i] = '@';
        }
    }
}
int main(){
 char sentence[100];

 cout<<"Write down the sentence : ";
 cin.getline(sentence,50);

 replaceSentence(sentence);
 cout<<"Replace the space : "<<sentence;

 return 0;

}