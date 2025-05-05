class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ans=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i] == "C"){
                st.pop();
            }
            else if(operations[i] == "D"){
                int s = 2*st.top();
                st.push(s);
            }
            else if(operations[i] == "+"){
                int s1 = st.top();
                st.pop();
                int s2 = st.top();
                st.push(s1);
                st.push(s1+s2);
            }
            else{
                int num = stoi(operations[i]);
                st.push(num);
            }
        }
        while(!st.empty()){
            int n = st.top();
            ans += n;
            st.pop();
        }
        return ans;
    }
};