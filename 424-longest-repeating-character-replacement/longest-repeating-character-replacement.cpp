class Solution {
public:
    static bool comp(pair<char, int>& a, pair<char, int>& b) {
        return a.second > b.second;
    }

    int characterReplacement(string s, int k) {
        int l = 0, r = 0;
        int ans = 0;
        int uni=0;
        int len = 0;
        int maxf=0;
        
        unordered_map<char, int> v;
        while (r < s.size()) {
            v[s[r]] += 1;
            maxf = max(maxf,v[s[r]]);
            len = r - l + 1;
            uni = len-maxf;
            if (uni <= k) {
                ans = max(ans, len);
            } 
            else {
                v[s[l]]--;
                l++;
            }
            r++;
        }
        return ans;
    }
};