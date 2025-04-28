class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int left = 0;
        long long current_sum = 0;
        
        long long ans;

        for(int right = 0; right<nums.size() ;right++){
            current_sum += nums[right];
           
            

            while(current_sum * (right-left+1)>=k){
               current_sum -= nums[left];
               left++;
                
            }
            
            ans += (right-left+1);
            
        }

        return ans;
    }
};