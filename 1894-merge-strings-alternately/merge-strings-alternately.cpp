class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       int sm = min(word1.length(),word2.length());
       string ans="";
       
       for(int i=0;i<sm;i++){
         ans += word1[i];
         ans += word2[i];
         
       }
       if(word1.length()>word2.length()){
         for(int i = sm;i<word1.length();i++){
            ans += word1[i];
         }
       }
       else{
          for(int i = sm;i<word2.length();i++){
            ans += word2[i];
          }
       }
       return ans;


    }
};