class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        for(int i = 0;i<row ;i++){
            if(grid[i][0]==0){
                for(int j=0;j<col;j++){
                    grid[i][j] = 1 - grid[i][j];
                }
            }

        }
        
        for(int j=1;j<col;j++){
            int zeroc = 0;
            for(int i=0;i<row;i++){
              if(grid[i][j] == 0){
                 zeroc++;
              }
            }
            int onec = row - zeroc;
            if(zeroc>onec){
               for(int i=0;i<row;i++){
                    grid[i][j] = 1 - grid[i][j];
                } 
            }
        }
        int sum=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
               sum += grid[i][j] * pow(2,col-j-1); 
            }
        }
        return sum;

        
    }
};