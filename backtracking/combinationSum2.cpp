class Solution {
public:
 void solve(vector<int>& candidates, int target,vector<vector<int>>& result,vector<int>& output,int i){
     if(target==0){
         result.push_back(output);
         return ;

     }

     if(target<0) {
     return;
     }


     for(int j=i; j<candidates.size(); j++){
         if(j>i && candidates[j]==candidates[j-1]){
             continue;
         }

         output.push_back(candidates[j]);
         solve(candidates , target - candidates[j],result, output, j+1);
         output.pop_back();
     }
 }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>result;
        vector<int>output;
        int i =0;
        solve(candidates,target,result,output,i);

        return result;
    }
};