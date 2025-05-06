class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       sort(nums.begin(),nums.end());
       int c_sum = INT_MAX/2; // no overflow
       for(int i=0;i<nums.size()-2;i++){
            int dif = target - nums[i];
            int left = i+1;
            int right = nums.size()-1;
            while(left<right){
                int sum  = nums[left]+nums[right]+nums[i];
                if(abs(sum-target)<abs(c_sum-target)){
                    c_sum = sum;
                }
                if(sum<target){
                    left++;
                }
                else if(sum>target){
                    right--;
                }
                else{
                    return sum;
                }
            }
        }
        return c_sum;
    }
};