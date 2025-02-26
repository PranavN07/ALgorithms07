class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        int count = 0;

        for (int i = 0; i < len; i++) {
            // Check if the current plot is empty
            if (flowerbed[i] == 0) {
                // Check if the left and right slots are also empty
                bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);
                bool rightEmpty = (i == len - 1 || flowerbed[i + 1] == 0);

                if (leftEmpty && rightEmpty) {
                    // Place a flower
                    flowerbed[i] = 1;
                    count++;
                    
                    // Skip the next spot to maintain spacing
                    i++;
                }
            }

            // If we already placed enough flowers, return true
            if (count >= n) {
                return true;
            }
        }

        // Check if we could place `n` flowers
        return count >= n;
    }
};