class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
      long long count = 0,i=0,j=0;
      int max_count = 0,n = nums.size();
      //dimag count nikalne me hai
      int max = *max_element(nums.begin(),nums.end());
      while(j<n){
        if(nums[j]==max){
            max_count++;
        }
        while(max_count>=k){
            count += n-j;

            if(nums[i] == max){
                max_count--;
            }

            i++;
        }
        j++;
        

      }
      return count;
      
      
    }
};