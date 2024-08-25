class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        while(k>0){
            int min_i=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==nums[min_i]){
                    min_i=min_i;
                }
                else if(nums[i]<nums[min_i]){
                   min_i = i;
                }
            }
        nums[min_i] *= multiplier;
        k--;
        }
        return nums;

    }
};