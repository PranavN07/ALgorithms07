#include <vector>
using namespace std;

class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        int i = 0;
        long long res = 0;
        int n = nums.size();
        
        while (i < n) {
            int j = i;
            while (j + 1 < n && nums[j] != nums[j + 1])
                j++;
            
            int len = j - i + 1;
            res += (long long)len * (len + 1) / 2;
            
            i = j + 1;
        }
        
        return res;
    }
};
