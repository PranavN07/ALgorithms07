class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k){
        int n = cardPoints.size();
        int lsum=0,rsum=0;
        int sum=0;
        if(n<k){
            for(auto& i:cardPoints){
               sum += i;  
            }
            return sum;
        }
        
        for(int i=0;i<k;i++){
            lsum += cardPoints[i];
        }
        sum = lsum;
        int rn = n-1;
        for(int i=k-1;i>=0;i--){
            lsum -= cardPoints[i];
            rsum += cardPoints[rn];
            rn--;
            sum = max(sum,lsum+rsum);
        }
        return sum;
        
    }
};