class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
       int count = 0;
       for(int n=0;n<arr.size();n++){
          if((arr[n]^1) == (arr[n]+1)){
            count = 0;
          }
          else{
            count +=1;
            if (count==3){
                return true;
            }
            
          }
       }
       return false;    



    }
};