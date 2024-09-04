class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<string> st;
        for(vector<int>& obs: obstacles){
            string key = to_string(obs[0])+"_"+to_string(obs[1]);
            st.insert(key);
        }
        int x=0;
        int y=0;
        int maxD =0;
        
        //pointing north 
        pair<int,int> dir = {0,1};

        for(int i=0;i<commands.size();i++){
          if(commands[i]== -2){
              dir = {-dir.second,dir.first};
           }else if(commands[i] == -1){
               dir={dir.second,-dir.first};
           }else{
            for(int j=0;j<commands[i];j++){
                int nextX = x+ dir.first;
                int nextY = y+ dir.second;
                string nextKey = to_string(nextX)+"_"+to_string(nextY);
                if(st.find(nextKey)!= st.end()){
                    break;
                }
                x = nextX;
                y = nextY;
            }
           }
           maxD = max(maxD, x*x+y*y);

        }
        return maxD;
        
    }
};