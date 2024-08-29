class Solution {
public:
    int maxProfit(vector<int>& pri) {
        int n=pri.size();
        stack<int>st;
        int maxi=0;
        for(int i=0; i<n; i++){
            if(st.empty()){
                st.push(pri[i]);
            }
            else{
                if(st.top()>pri[i]){
                    st.pop();
                    st.push(pri[i]);
                }
                else{
                    maxi=max(maxi, pri[i]-st.top());
                }
            }
        }
        return maxi;
    }
};