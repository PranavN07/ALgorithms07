class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0, maxx;

        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }
        
        maxx = sum;
        
        for(int i = k; i < nums.size(); i++) {
            sum = sum + nums[i] - nums[i - k];
            maxx = max(maxx, sum);
        }
        
        return maxx / k;
    }
};