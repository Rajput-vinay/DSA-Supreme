
//  recursive solution

// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// void solve(vector<int>& arr, int& minPrice , int& maxProfit ,int i){

//     //  base case
//    if(i == arr.size()) return;

//     if(arr[i]<minPrice){
//         minPrice = arr[i];
//     }
//     int today_profit = arr[i]- minPrice;

//     if(today_profit>maxProfit){
//         maxProfit = today_profit;
//     }

//     solve(arr, minPrice, maxProfit, i+1);
// }


// int main(){
//     vector<int>arr{7,1,5,3,6,4};

//     int minPrice= INT_MAX;
//     int maxProfit = INT_MIN;

//     int i =0;

//     solve(arr, minPrice, maxProfit,i);
//     cout<<maxProfit;

// }


//  iterative solution

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
vector<int>arr{1,5,3,8,12};
int minPrice = INT_MAX;
int maxProfit = INT_MIN;

for(int i =0;i<arr.size();i++){
    if(arr[i]<minPrice){
        minPrice= arr[i];
    }
    int today_profit = arr[i] - minPrice;

    if(today_profit > maxProfit){
        maxProfit = today_profit;
    }
    
}
cout<<maxProfit;

}
