class Solution {
public:
    string intToRoman(int num) {
        const vector<pair<int, string>> valueSymbols{
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
            {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
            {5, "V"},    {4, "IV"},   {1, "I"}};

        string res;

        for(int i=0;i<valueSymbols.size();i++){
            if(num == 0)break;

            while(num >= valueSymbols[i].first){
                num -= valueSymbols[i].first;
                res += valueSymbols[i].second;
            }
        }

        return res;        
    }
};