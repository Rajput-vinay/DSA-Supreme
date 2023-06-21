#include <iostream>
#include <queue>

using namespace std;

void interleaveQueue(queue<int> &q)
{

    queue<int> q2;
    int count = 0;
    int n = q.size();
    int k = n/2;

    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        q2.push(element);
        count++;
        if (count == k)
        {
            break;
        }
    }

    while(!q.empty() && !q2.empty()){
        int element = q2.front();
        q2.pop();
        q.push(element);
        int element2 = q.front();
        q.pop();
        q.push(element2);

        
    }
     if(n&1){
        int element = q.front();
        q.pop();
        q.push(element);
    }
}

void print(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

   
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
q.push(100);
    interleaveQueue(q);
    print(q);
}