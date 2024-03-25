class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_map<int,int> ut;
       vector<int> res;
       for(int i=0;i<nums.size();i++){
         ut[nums[i]]+=1;
         
       }
       for(int i=0;i<ut.size();i++){
          if(ut[i]>1){
            res.push_back(i);
          }
       }
       return res; 
    
    }
};