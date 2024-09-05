class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int tot = rolls.size() + n;
        int sum  =  mean*tot;
        int al_sum = accumulate(rolls.begin(),rolls.end(),0);
        int miss_sum = sum - al_sum;
        if(miss_sum<n || miss_sum>n*6){
            return {};
        }
        vector<int> result(n,miss_sum/n);
        int remainder = miss_sum % n;
        for(int i=0; i< remainder;i++){
            result[i]++;

        }
        return result;

    }
};