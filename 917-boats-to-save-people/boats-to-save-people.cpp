class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
      int r=0;
      int l=people.size()-1;
      int cnt=0;
      sort(people.begin(),people.end());
      while(r<=l){
        cnt++;
        if(people[l]+people[r]<=limit){
            r++;
        }
        l--;
        
      }
      return cnt;
     }

    
};