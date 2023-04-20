// 6. Zigzag Conversion
// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

// P   A   H   N
// A P L S I I G
// Y   I   R
// And then read line by line: "PAHNAPLSIIGYIR"

// Write the code that will take a string and make this conversion given a number of rows:

// string convert(string s, int numRows);
 

// Example 1:

// Input: s = "PAYPALISHIRING", numRows = 3
// Output: "PAHNAPLSIIGYIR"
// Example 2:

// Input: s = "PAYPALISHIRING", numRows = 4
// Output: "PINALSIGYAHRPI"
// Explanation:
// P     I    N
// A   L S  I G
// Y A   H R
// P     I
// Example 3:

// Input: s = "A", numRows = 1
// Output: "A"
 

// Constraints:

// 1 <= s.length <= 1000
// s consists of English letters (lower-case and upper-case), ',' and '.'.
// 1 <= numRows <= 1000
// Accepted
// 1M
// Submissions
// 2.

class Solution {
public:
    string convert(string s, int numRows) {
      if(numRows==1)
      return s;


      vector<string>zigZag(numRows);
      int i = 0;
      int row =0;
        
     bool direction = 1; // up to bottom

      while(true)  { 

             if(direction){
                 while(i<s.size() && row<numRows){
                     zigZag[row].push_back(s[i]);
                       row++;
                       i++;
                     }
        
                       row = numRows - 2;
          
                }
         else {
                    while(i<s.size()  && row >=0){
                     zigZag[row--].push_back(s[i++]);

                    }
                row = 1;
             
            }

                   if(i>=s.size())break;
     
                direction = ! direction;
        }


       string ans ="";
       for(int i =0; i<zigZag.size();i++){
            ans += zigZag[i];
        } 
    
     
        return ans;
    }
};