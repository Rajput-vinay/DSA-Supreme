// 5. Longest Palindromic Substring
// Medium
// 24.8K
// 1.5K
// Companies
// Given a string s, return the longest 
// palindromic
 
// substring
//  in s.

 

// Example 1:

// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.
// Example 2:

// Input: s = "cbbd"
// Output: "bb"
 

// Constraints:

// 1 <= s.length <= 1000
// s consist of only digits and English letters.


// class Solution {
// public:

bool isPalindrome(string&s, int i , int j){
    // st =0;
    // e = s.size()-1;

    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
        
    }
    return true;
}
    string longestPalindrome(string s) {
         string ans="";

         for(int i =0; i<s.size(); i++){
             for(int j = i ; j<s.size();j++){
                 if(isPalindrome(s,i,j)){
                     string t = s.substr(i , j-i+1);
                  
                    //  ans = t.size() > ans.size()? t : ans;

                    if(t.size()>ans.size()){
                        ans = t;
                    }
                    
                    
                    
                    
             }
             }
         }
         return ans;
    }
};