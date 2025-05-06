class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // return- minimum length of the subarray 
        // k
        int left =0;
        int sum = 0;
        int min_length = INT_MAX;
        int len;        

        for(int right = 0;right<nums.size();right++){
            sum += nums[right];
            while(sum >=  target){
                len = right-left+1;
                min_length = min(len,min_length);
                sum -= nums[left];
                left++;
                    
            }
            
        }
        return min_length == INT_MAX ? 0 : min_length;
        
    }
};