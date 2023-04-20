// 242. Valid Anagram
// Easy
// 8.8K
// 282
// Companies
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false
 

// Constraints:

// 1 <= s.length, t.length <= 5 * 104
// s and t consist of lowercase English letters.


class Solution {
public:
    bool isAnagram(string s, string t) {
        string ans = s;
        string count = t;
        sort(ans.begin(),ans.end());
        sort(count.begin(),count.end());
    //    cout<<ans<<endl;
    //    cout<<count;
        if(ans.compare(count)!=0){
            return false;
        }
        else if(count.compare(ans)!=0){
            return false;
        }
        
        return true;
    }
};