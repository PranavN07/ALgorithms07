class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> np;
        for(char c:magazine){
            np[c]++;
        }
        for(char c:ransomNote){
            if(np[c]<=0){
                return false;
            }
            np[c]--;
        }
        return true;

    }
};