#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int> &q, int k){

 stack<int> s;
    int n = q.size();
     int count =0;
     
     if(k<=0|| k>n){
         return;
     }



    while(!q.empty()){
       
        int element = q.front();
        q.pop();
        s.push(element);
        count++;
        if(count == k){
            break;
        }
    }

    while(!s.empty()){
         
         int element = s.top();
         s.pop();
         q.push(element);
        
    }


      //step C: push n-k element from q front to back 
        count = 0;
        while(!q.empty() && n-k != 0) {
                int temp = q.front();
                q.pop();
                q.push(temp);
                count++;

                if(count == n-k)
                        break;
        }
}


void printElement(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main(){

queue<int>q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
q.push(6);
q.push(7);
q.push(8);


reverse(q,3);
printElement(q);

}