class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero =0;
        int len=0;
        int right=0,left=0;
        int n=nums.size();
        while(right<n){
            zero += (nums[right]==0);
            while(zero>k){
                zero -= (nums[left]==0);
                left++;
            }
            len  = max(right-left+1,len);
            right++;
        }
        return len;
       
        
    }
};