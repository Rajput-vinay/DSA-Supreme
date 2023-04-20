//  string 

#include<iostream>
using namespace std;
#include<string.h>

int main(){
    //  char name[100];
    //  cout<<"Enter you name : ";
    //  cin>>name;

    //  cout<<"Aapka  name "<<name<<" hai";


//     char name[7];
// cin>>name;
//     for(int i=0; i<7;i++)
//     {
//         cout<<"index "<< i <<"value "<<name[i]<<endl;
//     }


// int value = (int)name[6];
// cout<<"value is : "<<value;



char name[10];
// cin>>name;
cin.getline(name , 50);

cout<<name;
     return 0;
}