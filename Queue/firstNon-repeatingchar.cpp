#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main(){
    string s = "zarcaazrd";

    string ans="";
    queue<char>q;
    int freq[26]={0};


    for(int i =0; i<s.length(); i++){
        int ch = s[i];
        freq[ch-'a']++;

        q.push(ch);

        while(!q.empty()){
            if(freq[q.front() - 'a']>1){
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }

        if(q.empty()){
            ans.push_back('#');
        }
    }

 cout<<"ans is non - repeated "<<ans;


    return 0;


}