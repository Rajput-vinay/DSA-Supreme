class Solution {
public:


void solve(vector<int>& candidates, int target,vector<vector<int>>& result,vector<int> &output,int i){
    if(target==0){
        result.push_back(output);
        result; 

    }

    if(target<0){ 
        return;
    }

    for(int j = i ; j<candidates.size();j++){
        output.push_back(candidates[j]); 
       solve(candidates,target - candidates[j], result,output,j);
       output.pop_back();

    }
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>output;

        int i =0;

        solve(candidates,target , result,output,i);
       return result;
    }
};