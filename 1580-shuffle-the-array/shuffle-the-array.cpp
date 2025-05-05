class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int left = 0,right = n;
        for(int i=0;i<n;i++){
            ans.push_back(nums[left]);
            ans.push_back(nums[right]);
            left++;
            right++;
        }
        return ans;
    }
};