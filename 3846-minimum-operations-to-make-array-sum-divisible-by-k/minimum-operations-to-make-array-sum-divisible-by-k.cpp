class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(int &num:nums){
            sum += num;
        }
        int remain = sum % k;
        return remain;
    }
};