class Solution {
public:
    int getLucky(string s, int k) {
       
       string number="";
       for(char ch:s){
            number += to_string(ch-'a'+1);
        }
       
        while(k>0){
            int temp = 0;
            for(char x:number){
                temp += x -'0';

            }
            number = to_string(temp);
            k--;

        }
        return stoi(number);

    }
};