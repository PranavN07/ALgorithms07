class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       
        vector<int> np;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                np.push_back(i);
            }
        }
        if(np.empty()){
            return{-1,-1};
        }
        int n = np.size();
        return {np[0],np[n-1]};
    }
};