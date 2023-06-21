#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int>s;
    s.push_front(40);
    s.push_front(50);
    s.push_back(80);
    s.push_back(70);
    s.push_back(20);

    cout<<s.size()<<endl;
}