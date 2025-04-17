// multiply 2 numbers(strings)
// Stoi -can't 
//long long 
//0456 - 456 
//0-50
//7- 57 
//'7'-'0' = 57 -50 = 7

class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        vector<int> result(n+m,0);
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
               int mul = (num1[i]-'0')*(num2[j]-'0');
               int sum = mul + result[i+j+1];
               result[i+j+1] = sum%10;
               result[i+j] += sum/10;
            }
        }
        string product = "";
        for(int num:result){
            if(!(product.empty() && num==0)){
                product += to_string(num);
            }
        }

        if(product.empty()){
            return "0";
        }
        else{
            return product;
        }
    }
};