// 179. Largest Number
// Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

// Since the result may be very large, so you need to return a string instead of an integer.

 

// Example 1:

// Input: nums = [10,2]
// Output: "210"
// Example 2:

// Input: nums = [3,30,34,5,9]
// Output: "9534330"
 

// Constraints:

// 1 <= nums.length <= 100
// 0 <= nums[i] <= 109

class Solution {
public:

 static bool myCamp(string a , string b){

    //  check the codition if we give a [ 3, 30]
    // this funtion perform in such a way
    //  a + b = "3"+ "30" = "330";
    //  else 
    //  b + a = "30"+ "3"= "303"
     
    string t = a+b;
    string t2 = b+a;

    return t>t2;
 }

    string largestNumber(vector<int>& nums) {
        
        // result may be very large , so we need to reurn a string  
        //  convert into string
        vector<string>s ;

        for(auto n:nums){
            s.push_back(to_string(n));
        }
         
        //  sort using the compartort ;
        sort(s.begin(),s.end(), myCamp);
    //   if largest element is zero
        if(s[0] == "0") return "0";
       
    //    sum of string 
       string ans ="";
       for(auto str : s){
            ans += str;
        }
        return ans;
        
    }
};