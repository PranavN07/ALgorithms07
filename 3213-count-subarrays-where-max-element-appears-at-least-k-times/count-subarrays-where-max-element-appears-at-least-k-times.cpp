class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
      int max_no = *max_element(nums.begin(),nums.end());
      int count  = 0;
      for(int num:nums){
        if(num==max_no){
            count++;
        }
      }
      if(count<k){return 0;}
      long long ans = 0;
      int left = 0;
      int loop_cnt = 0;


      for(int right = 0;right<nums.size();right++){

        if(nums[right]==max_no){
            loop_cnt++;
        }
        while(loop_cnt==k){
            ans += nums.size()-right;
            if(nums[left]==max_no){
                loop_cnt--;
                
            }
            left++;
        }
          
      }
      return ans;
      
    }
};