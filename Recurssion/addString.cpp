// // 415. Add Strings

// Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

 

// Example 1:

// Input: num1 = "11", num2 = "123"
// Output: "134"
// Example 2:

// Input: num1 = "456", num2 = "77"
// Output: "533"
// Example 3:

// Input: num1 = "0", num2 = "0"
// Output: "0"
 

// Constraints:

// 1 <= num1.length, num2.length <= 104
// num1 and num2 consist of only digits.
// num1 and num2 don't have any leading zeros except for the zero itself.


class Solution {
public:
void solve(string& num1,string& num2,int p1,int p2,string& ans , int& carry){
//  base case
    if(p1<0 && p2<0){
        if(carry!=0){
      ans.push_back(carry + '0');
        }
        return;
    }


    //  logic


int n1= (p1>=0?num1[p1]:'0')-'0';
int n2= (p2>=0?num2[p2]:'0')-'0';
int sum = n1 +n2+carry;
int digit=sum%10;
carry = sum/10;
ans.push_back(digit +'0');

solve(num1,num2,p1-1,p2-1,ans,carry);

}

    string addStrings(string num1, string num2) {

        int p1 = num1.size()-1;
        int p2= num2.size()-1;

        string ans ="";
        int carry=0;

solve(num1,num2,p1,p2,ans,carry);
reverse(ans.begin(),ans.end());
return ans;
    }
};