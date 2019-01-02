//
// Created by authetic on 2019/1/2.
//

/*
 * Give a array which logs the price of a stock
 * every day. Buy one or sell one one day for
 * multiple times, find the maximum profit you can
 * get.
 *
 * Seeming the array as a increasing sequence, we
 * will buy the stock when the price is lowest and
 * sell when it's highest. And there may be several
 * increasing sequences. Just a piece of cake for C++.
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, len = prices.size();
        for (int i = 1; i < len; i ++ ) {
            if (prices[i] > prices[i-1]) {
                ans += prices[i] - prices[i-1];
            }
        }
        return ans;
    }
};