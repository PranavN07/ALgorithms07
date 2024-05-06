class Solution {
public:
    static bool compare(pair<int,int> a,pair<int,int> b){
        if(a.second==b.second){
            return a.first>b.first;
        }
        return a.second>b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> np;
       for(int i=0;i<nums.size();i++){
          np[nums[i]]++;

       }
       vector<pair<int,int>> res(np.begin(),np.end());
       sort(res.begin(),res.end(), compare);
       vector<int> ans;
       for(int i =0;i<k;i++){
         ans.push_back(res[i].first);
       }
       return ans;
    }
};