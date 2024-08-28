class Solution {
public:
  void solve(int ind,vector<vector<int>> &ans,vector<int> &ds,vector<int> &arr,int t){
       if(ind == arr.size()){
            if(t==0){
               ans.push_back(ds);
            }
            return;
       }

       if(arr[ind] <= t){
          ds.push_back(arr[ind]);
          solve(ind,ans,ds,arr,t-arr[ind]);
          ds.pop_back();
        }
        
        solve(ind+1,ans,ds,arr,t);

    }
   
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;

        
        solve(0,ans,ds,candidates,target);
        return ans;
        
    }
};