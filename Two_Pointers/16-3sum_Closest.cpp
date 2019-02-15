//
// Created by authetic on 2019/2/15.
//

/*
 * Just like the 3sum.
 */

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        long ans = INT_MAX;
        int len = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len; i ++ ) {
            int j = i + 1, k = len - 1;
            while (j < k) {
                int temp = nums[i] + nums[j] + nums[k];
                if (temp == target) {
                    return target;
                } else if (target - temp > 0) {
                    j ++;
                } else {
                    k --;
                }
                if (abs(target - temp) < abs(target - ans)) {
                    ans = temp;
                }
            }
        }
        return (int)ans;
    }
};