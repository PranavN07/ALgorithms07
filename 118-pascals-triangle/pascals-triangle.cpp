class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 1) return{{1}};

        vector<vector<int>> tree = generate(numRows-1);
        vector<int> np(numRows,1);

        for(int i=1;i<numRows-1;i++){
            np[i] = tree.back()[i-1]+tree.back()[i];
            
        }
        tree.push_back(np);
        return tree;

        

    }
};