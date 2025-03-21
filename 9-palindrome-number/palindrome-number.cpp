class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        
        vector<int> num;
        while(x!=0){
            num.push_back(x%10);
            x/=10;
        }
        int l=0,r=num.size()-1;
        while(l<r){
            if(num[l]==num[r]){
                l++;
                r--;
            }
            else{
                return false;
            }
        }
        return true;

    }
};