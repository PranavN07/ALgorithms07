class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int> np;
       for(auto i:nums){
           np[i]++;
       }
       int threshold = floor(nums.size()/3);
       vector<int> res;
       for(auto& [key,value]:np){
           if(value > threshold){
              res.push_back(key);
           }
       }
       return res;
    }
};