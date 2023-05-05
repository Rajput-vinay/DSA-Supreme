// 279. Perfect Squares

// marks TL  using recurssion optimize using DP. 

class Solution {
public:

int numSquaresFinder(int n){
    if(n==0) return 1;
    if(n<0) return 0;
     int i = 1;
     int ans = INT_MAX;
     int end = sqrt(n);
     while(i<=end){
     int prefectSquare = i*i;
     int perfectans = 1+numSquaresFinder(n-prefectSquare);
     if(perfectans<ans){
     ans = perfectans;
   }
   ++i;
     }
     return ans;   
}
    int numSquares(int n) {
       return numSquaresFinder(n)-1;
    }
};