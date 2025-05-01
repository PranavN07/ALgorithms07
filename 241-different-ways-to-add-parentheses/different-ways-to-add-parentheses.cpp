class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> results;
        for(int i=0;i<expression.size();i++){
            char c  = expression[i];
            if(c == '+'||c=='-'||c=='*'){
                vector<int> left = diffWaysToCompute(expression.substr(0,i));
                vector<int> right = diffWaysToCompute(expression.substr(i+1));

                for(int l:left){
                    for(int r: right){
                        if(c == '+') results.push_back(l+r);
                        else if(c == '-') results.push_back(l-r);
                        else if(c == '*') results.push_back(l*r);
                    }
                }
            }
        }
        // special - one number 
        if(results.empty()){
            results.push_back(stoi(expression));
        }

        return results;
    }
};