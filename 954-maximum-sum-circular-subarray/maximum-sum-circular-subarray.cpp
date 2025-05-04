class Solution {
public:
    int kadanes(vector<int> &nums,int n){
        
        int cs = nums[0];
        int ms = nums[0];
        for(int i=1;i<n;i++){
            cs = max(cs+nums[i],nums[i]);
            ms = max(cs,ms);
        }
        return ms;

    }
     int mini(vector<int> &nums,int n){
        int total_sum = 0;
        for(auto &i:nums){
            total_sum += i;
        }
        int cs = nums[0];
        int ms = nums[0];
        for(int i=1;i<n;i++){
            cs = min(cs+nums[i],nums[i]);
            ms = min(cs,ms);
        }
        return total_sum-ms;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int max1 = kadanes(nums,nums.size());
        int max2 = mini(nums,nums.size());
        int ans = max(max1,max2);
        if(ans==0){
            int max = INT_MIN;
            for(auto &i:nums){
                if(i>max){
                    max = i;
                }
            }
            return max;
        }
        return ans;
    }
};