class Solution {
public:
  
        
void solve(vector<int>& nums,vector<vector<int>>& result,int i , int n)
{
    //  base case

    if(i>=n){
        result.push_back(nums);
        return ;

    }
  unordered_map<int , bool>visited;
    for(int j =i;j<n;j++){
        if(visited.find(nums[j])!=visited.end()){
            continue;
        }
        visited[nums[j]]=true;
        swap(nums[i],nums[j]);

        solve(nums, result,i +1,n);

        swap(nums[i],nums[j]);
    }
}
  vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>result;
        int i =0;
        int n = nums.size();
        solve(nums,result, i,n );
       return result;

    }
};