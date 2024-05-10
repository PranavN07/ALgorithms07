class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_map<int,int> up;
      for(int i =0;i<nums.size();i++){
        up[nums[i]]++;
      }
      for(int i =0;i<up.size();i++){
         if(up[nums[i]]>=2){
            return true;
         }
      }
      return false; 
    }
};