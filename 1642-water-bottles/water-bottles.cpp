class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles>=numExchange){
            int carry = numBottles/numExchange;
            int remain = numBottles % numExchange;
            ans += carry;
            numBottles  = remain + carry;

        }

    return ans;

    }
};