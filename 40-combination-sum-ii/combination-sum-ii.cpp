class Solution {
public: 
    void solve(int ind,int t,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds){
        if(t==0){
            ans.push_back(ds);
            return;
        }

        for(int i = ind;i<arr.size();i++){
            //i>ind depicts that we are not picking that wlwmmtn the first time 
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>t) break;
            ds.push_back(arr[i]);
            solve(i+1,t-arr[i],arr,ans,ds);
            ds.pop_back(); 
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
        solve(0,target,candidates,ans,ds);
        return ans;

    }
};