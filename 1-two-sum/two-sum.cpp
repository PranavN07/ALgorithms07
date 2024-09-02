class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> np;
        for(int i=0;i<nums.size();i++){
            if(np.find(target-nums[i])==np.end()){
                np[nums[i]]=i;
            }
            else{
                return {np[target-nums[i]],i};
            }
        }
        return {-1,-1};
            
        
    }
};