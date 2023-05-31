// 17. Letter Combinations of a Phone Number
// Medium
// 14.9K
// 839
// Companies
// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.


 

// Example 1:

// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
// Example 2:

// Input: digits = ""
// Output: []
// Example 3:

// Input: digits = "2"
// Output: ["a","b","c"]



class Solution {
public:

void solve(vector<string>& ans , int index , vector<string>& mapping , string output , string & digits){

    //  base case 
    if(index >= digits.length()){
     ans.push_back(output);
       return ;

    }
//    convert string or char into int
    int digit = digits[index] -'0';
    //  mapping
    string value = mapping[digit];
  
    for(int i = 0; i<value.length() ;i++){
        char ch = value[i];
     
        output.push_back(ch);

        solve(ans, index+1, mapping, output, digits);

        output.pop_back();
    }

}

    vector<string> letterCombinations(string digits) {
        
        vector<string>ans;
       
        int index =0;

        string output="";

         if(digits.length()==0){
            return ans;
        }
        vector<string>mapping(10);
        mapping[2] ="abc";
        mapping[3]="def";
        mapping[4]="ghi";
        mapping[5]="jkl";
        mapping[6]="mno";
        mapping[7]="pqrs";
        mapping[8]="tuv";
        mapping[9]="wxyz";
       
        solve(ans,index,mapping, output,digits);
        return ans;
    }
};