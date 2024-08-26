class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0,l=0;
        vector<int> np(256,-1);
        int sum=0;
        int len = 0;
        int maxlen=0;
        int n = s.size();
        while(r<n){
            if(np[s[r]] != -1){
                if(np[s[r]]>=l){
                    l = np[s[r]]+1;
                }
            }               
            len  = r-l+1;
            maxlen = max(len,maxlen);
            np[s[r]] = r;
            r++;
        }
        return maxlen;
    }
};