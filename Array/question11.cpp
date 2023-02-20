//  triplet that upon addition gives value equal to sum

#include<iostream>
using namespace std;

int main(){
    int arr[]={10,50,40,30,60,80};
    int n;
    int sum=100;


    for(int i=0;i<6;i++){
        int element =arr[i];
        for(int j=i+1; j<6;j++){
            int element1 =arr[j];
            for(int k=j+1;k<6;k++){
                int element2 =arr[k];
                //if(element+element1+element2==sum)
                    cout<<"found paired "<<element<<","<<element1<<","<<element2<<endl;
                
            }

        }
    }

}