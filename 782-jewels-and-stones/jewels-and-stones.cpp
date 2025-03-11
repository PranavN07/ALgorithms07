class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> np;
        for(int i=0;i<stones.size();i++){
            np[stones[i]]++;

        }
        int ans = 0;
        for(int i=0;i<jewels.size();i++){
            ans += np[jewels[i]];
        }
        return ans;
    }
};