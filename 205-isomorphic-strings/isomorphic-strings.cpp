
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s1;
        unordered_map<char, char> t1;

        int n = s.length();
        for (int i = 0; i < n; i++) {
            char ch1 = s[i];
            char ch2 = t[i];
            if(s1.find(ch1)!= s1.end() && s1[ch1] != ch2 || t1.find(ch2)!= t1.end() && t1[ch2] != ch1){
                return false;
            } 
            s1[ch1] = ch2;
            t1[ch2] = ch1;       
            
        }
        return true;
    }

};