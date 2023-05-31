// 22. Generate Parentheses
// Medium
// 17.8K
// 722
// Companies
// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

// Example 1:

// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
// Example 2:

// Input: n = 1
// Output: ["()"]
 

// Constraints:

// 1 <= n <= 8



class Solution {
public:

void solve(vector<string>&ans , string output , int n , int open, int close){

    //  base case

    if(open==0 && close==0){
        ans.push_back(output);
        return;
    }

    //  open bracket add

    if(open>0){
        output.push_back('(');

        solve(ans, output ,n,open -1, close);

        //  back track

        output.pop_back();
    }

      if(close>open){
          output.push_back(')');
          solve(ans,output,n,open,close-1);

        //   back track
        output.pop_back();
      }

}

    vector<string> generateParenthesis(int n) {
        int close=n;
        int open=n;
       vector<string>ans;
       string output = "";
        solve(ans, output,n,open,close);
         
         return ans;
    }
};