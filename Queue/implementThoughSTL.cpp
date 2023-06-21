#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> Q;

    Q.push(40);
    Q.push(50);
    Q.push(80);
    Q.push(90);
    Q.push(100);

   cout<< Q.size()<<endl;


Q.pop();
cout<<Q.size()<<endl;

if(Q.empty()){
    cout<<"Queue is emepty";
}
else{
    cout<<"Queuee is not empty";
}

return 0;
    
}