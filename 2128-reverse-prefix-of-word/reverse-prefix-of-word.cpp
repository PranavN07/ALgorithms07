class Solution {
public:
    string reversePrefix(string word, char ch) {
       int n = word.find(ch);
       int i=0;
       while(i<n){
        swap(word[i],word[n]);
        i++;
        n--;
       }
       return word; 
    }
};