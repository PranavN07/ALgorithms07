class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> np;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(np.find(target - nums[i])==np.end()){
                np[nums[i]]=i;
            }
            else{
                return {np[target-nums[i]],i};
                break;
            }

        }
        return {-1,-1};

       
    }
};