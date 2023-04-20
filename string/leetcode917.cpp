// 917. Reverse Only Letters
// Easy
// 1.9K
// 62
// Companies
// Given a string s, reverse the string according to the following rules:

// All the characters that are not English letters remain in the same position.
// All the English letters (lowercase or uppercase) should be reversed.
// Return s after reversing it.

 

// Example 1:

// Input: s = "ab-cd"
// Output: "dc-ba"
// Example 2:

// Input: s = "a-bC-dEf-ghIj"
// Output: "j-Ih-gfE-dCba"
// Example 3:

// Input: s = "Test1ng-Leet=code-Q!"
// Output: "Qedo1ct-eeLg=ntse-T!"



class Solution {
public:
    string reverseOnlyLetters(string s) {
       int i =0;
       int n = s. length();
       int j = n-1;

       for(int i = 0; i<n-1  ;i++){
           while(i<j && !isalpha(s[i])){
               i ++;
             
           }
         while(i<j && !isalpha(s[j])){
               j--;
               
           }

        if(i<j){
               swap(s[i],s[j]);
                
                j--;
         }
         
               
       }
       return s;
    }
};