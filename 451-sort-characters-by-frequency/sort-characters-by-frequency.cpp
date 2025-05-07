#include <unordered_map>
#include <vector>
#include <algorithm>

class Solution {
public:
    static bool cmp(pair<char, int> &a, pair<char, int> &b) {
        return a.second > b.second; 
    }

    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // Count frequencies
        for (char c : s) {
            freq[c]++;
        }

        // Convert map to vector for sorting
        vector<pair<char, int>> freqVec(freq.begin(), freq.end());
        sort(freqVec.begin(), freqVec.end(), cmp);

        // Build result string
        string ans;
        for (auto &p : freqVec) {
            ans.append(p.second, p.first);  // Append char 'freq' times
        }

        return ans;
    }
};
