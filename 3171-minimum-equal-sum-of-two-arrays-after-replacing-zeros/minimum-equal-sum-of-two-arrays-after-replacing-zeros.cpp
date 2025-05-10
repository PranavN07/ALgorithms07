class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int count1 = 0, count2 = 0;
        long long sum1 = 0, sum2 = 0; // ✅ Initialize sums to 0

        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] == 0) count1++;
            sum1 += nums1[i];
        }

        for (int i = 0; i < nums2.size(); i++) {
            if (nums2[i] == 0) count2++;
            sum2 += nums2[i];
        }

        long long minsum1 = sum1 + count1; // Add 1 for each zero
        long long minsum2 = sum2 + count2;

        // No zero in either array
        if (count1 == 0 && count2 == 0) {
            return sum1 == sum2 ? sum1 : -1;
        }

        // If nums2 has no zero, nums1 must match it exactly
        if (count2 == 0) {
            return minsum1 <= sum2 ? sum2 : -1;
        }

        // If nums1 has no zero, nums2 must match it exactly
        if (count1 == 0) {
            return minsum2 <= sum1 ? sum1 : -1;
        }

        // Both arrays can be adjusted with +1 per zero
        return max(minsum1, minsum2);
    }
};
