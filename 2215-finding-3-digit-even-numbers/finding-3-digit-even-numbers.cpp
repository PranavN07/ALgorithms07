class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans(10,0);
        for(int i=0;i<digits.size();i++){
            ans[digits[i]]++;
        }
        vector<int> res;
        for(int i =1;i<=9;i++){
            if(ans[i]==0)continue;
            ans[i]--;

            for(int j = 0;j<=9;j++){
                if(ans[j]==0)continue;
                ans[j]--;
                for(int k=0;k<=9;k+=2){
                    if(ans[k]==0)continue;
                    res.push_back(i*100 + j*10 + k);
                }
                ans[j]++;
            }
            ans[i]++;
        }
        return res;
        
    }
};