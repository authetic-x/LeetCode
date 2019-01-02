//
// Created by authetic on 2019/1/2.
//

/*
 * Find the maximum length of Wiggle Subsequence, while
 * "wiggle" means [1, 2, 1, 2] or [-1, 1, -1, 1]
 *
 * Solution: Just to be greed, whatever the sequence is
 * increasing or decreasing, choose the last node of the
 * subsequence, like [1, 2, 3, 4, -1, -2, -3], we will
 * choose [1, 4, -3], it's our simple strategy.
 */

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        int ans = 1;
        int flag = 0;
        for (int i = 1; i < nums.size(); i ++ ) {
            if (nums[i] != nums[i-1] && (flag == 0 ||
                                         (nums[i]-nums[i-1]) < 0 == flag > 0)) {
                ans ++;
                flag = nums[i] - nums[i-1];
            }
        }
        return ans;
    }

};