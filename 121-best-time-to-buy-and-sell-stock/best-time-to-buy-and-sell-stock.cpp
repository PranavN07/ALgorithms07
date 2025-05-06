class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> ans;
        int mini = prices[0];
        for(int i=0;i<prices.size();i++){
            mini  = min(mini,prices[i]);
            ans.push_back(prices[i]-mini);
        }
        sort(ans.begin(),ans.end(),greater<int>());

        return ans[0];
    }
};