class Solution {
public:

void solve(vector<vector<int>>& result, vector<int>& nums ,int i,int n){
    if(i>= n){
        result.push_back(nums);
        return;
    }

    for(int j =i ; j<n ; j++){
        swap(nums[i],nums[j]);

        //  recursive call 
        solve(result , nums, i+1, n);

        //  back track
        swap(nums[i],nums[j]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
          int i =0; 
          int n = nums.size();
        solve(result , nums, i ,n );
        return result;
    }
};