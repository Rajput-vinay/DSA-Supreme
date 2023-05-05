
// //  approach 1 find left to right

// #include<iostream>
// #include<string>

// using namespace std;
 
// void solve(string& str,char& key , int i, int& ans){
//     //  base case;

//     if(i>=str.length()){
//      return ;
//     }

//     if(str[i]==key)
//      ans= i;

//     solve(str,key,i+1,ans);
// }


// int main(){
//     string str= "abcddefgd";

//     char key = 'd';
//     int i =0;
//     int ans = -1;
//     solve(str , key,i,ans);
//     cout<<ans;
// }



// approach 2 find right to left

#include<iostream>
#include<string>

using namespace std;

void solve(string& str,char& key,int i, int& ans){
    // basecase 
    if(i<0) return ;

    if(str[i]==key){
    ans= i;
    return;
    }

    solve(str,key,i-1,ans);
}



int main(){
    string str = "abcdefffgh";
    char key = 'f';

    int i = str.length();

    int ans =-1;

    solve(str,key,i,ans);
    cout<<ans;

}