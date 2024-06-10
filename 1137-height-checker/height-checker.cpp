class Solution {
public:
    int heightChecker(vector<int>& heights) {
      vector<int> ynew(heights.begin(),heights.end());
      sort(ynew.begin(),ynew.end());
      int ans=0;
      for(int i =0;i<heights.size();i++){
        if(ynew[i] != heights[i]){
            ans++;
        }
      }
      return ans;      
    }
};