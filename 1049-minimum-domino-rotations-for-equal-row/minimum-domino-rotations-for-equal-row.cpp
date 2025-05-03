class Solution {
public:

    int check(vector<int>&tops,vector<int>&bottoms,int target){
        int uppper = 0;
        int bot = 0;
        for(int i=0;i<tops.size();i++){
            if(bottoms[i]!= target && tops[i]!= target) return -1;
            else if(bottoms[i]!=target) bot++;
            else if(tops[i]!=target) uppper++;

        }
        return min(uppper,bot);



    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int ans1 = check(tops,bottoms,tops[0]);
        int ans2 = check(tops,bottoms,bottoms[0]);
        if(ans1 == -1){
           return ans2;
        }
        else if(ans2 == -1)return ans1;

        return min(ans1,ans2);
    }
};