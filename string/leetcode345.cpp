// 345. Reverse Vowels of a String
// Easy
// 3.3K
// 2.4K
// Companies
// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

// Example 1:

// Input: s = "hello"
// Output: "holle"
// Example 2:

// Input: s = "leetcode"
// Output: "leotcede"


class Solution {
public:

bool isVowel(char ch ){
    ch = tolower(ch);
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';

}
    string reverseVowels(string s) {
    
      int i =0;
      int n = s.length();
      int j = n-1;
      while(i<j){
          if(isVowel(s[i]) && isVowel(s[j])){
              swap(s[i],s[j]);
              i++;
              j--;
          }
          else if(isVowel(s[i]) == 0){
              i++;
          }
          else 
          j--;
          
      }
 return s;
    
    }

};