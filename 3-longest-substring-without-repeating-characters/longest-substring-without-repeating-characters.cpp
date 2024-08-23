class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n<2){return n;}
        int left=0;
        int right = 0;
        int maxlen = 0;
        unordered_set<int> np;
        while(right != s.size()){
            if(np.find(s[right])==np.end()){
                maxlen = max((right-left+1),maxlen);
                np.insert(s[right]);
                right++;
            }
            else{
                //here is the twist to aceess all the possible cases we only remove the cas e
                np.erase(s[left++]);
                
            }
            
        }
        return maxlen;




        
    }
};