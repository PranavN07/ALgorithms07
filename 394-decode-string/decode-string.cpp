class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        

        for(int i=0;i<s.size();i++){
            if(s[i]!=']'){
                st.push(s[i]);
            }
            else{
                string ans = "";
                while(st.top() != '['){
                    ans = st.top() + ans;
                    st.pop();
                }
                st.pop();
                string number = "";
                while(!st.empty() && isdigit(st.top())){
                    number = st.top() + number;
                    st.pop();
                }
                int repeat = stoi(number);
                while(repeat--){
                      for(int p = 0; p < ans.size() ; p++){
                        st.push(ans[p]);
                    }
                    
                }
            }
        }
        s = "";
        while(!st.empty()){
            s = st.top() + s;
            st.pop();
        }
        return s;
        
    }
};