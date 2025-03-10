class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        long num=0;
        int i=0;
        bool ispos = true;
        
        while(i<n && s[i]==' '){
            i++;
            
        }

        
        if(s[i]=='+' || s[i]=='-'){
            ispos = (s[i]=='+');
            i++;
        }
        while(i<n && s[i]>='0' && s[i]<='9'){
            num *= 10;
            num += s[i]-'0';
            if(num > INT_MAX){
                return ispos ? INT_MAX : INT_MIN;
            }
            i++;
        }
        return ispos ? (int)num : int(num)*-1;
        
    }
};