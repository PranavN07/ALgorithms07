class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k){
        long long totalc = 0;
        int n = chalk.size();
        for(auto it:chalk){
            totalc += it;
        }
        
        k %= totalc;
        for(int i=0;i<n;i++){
            if(chalk[i]>k){
                return i;
            }
            k-= chalk[i];
        }

        return -1;
    }
};