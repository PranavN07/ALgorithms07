class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> charindexs;
        unordered_map<char,int> charindext;

        for(int i=0;i<s.length();i++){
            if(charindexs.find(s[i])==charindexs.end()){
                charindexs[s[i]] = i;

            }
            if(charindext.find(t[i])==charindext.end()){
                charindext[t[i]]=i;
            }

            if(charindexs[s[i]]!= charindext[t[i]]){
                return false;
            }

        }
        return true;
    }
};