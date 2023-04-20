// 205. Isomorphic Strings
// Easy
// 6.6K
// 1.4K
// Companies
// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

// Example 1:

// Input: s = "egg", t = "add"
// Output: true
// Example 2:

// Input: s = "foo", t = "bar"
// Output: false
// Example 3:

// Input: s = "paper", t = "title"
// Output: true
 

// Constraints:

// 1 <= s.length <= 5 * 104
// t.length == s.length
// s and t consist of any valid ascii character.




class Solution {
public:
    bool isIsomorphic(string s, string t) {
       int hash[256]={0};   // mapping of each char of language  s  to lan
       bool isCharsMapped[256] = {0};

       for(int i =0; i<s.size(); i++){
           if(hash[s[i]]==0  && isCharsMapped[t[i]]==0){
               hash[s[i]]=t[i];
               isCharsMapped[t[i]]=true;
           }
       }
       for(int i =0; i<s.size();i++){
           if(hash[s[i]]!=t[i]){
               return false;
           }
       }
       return true;
    }
};