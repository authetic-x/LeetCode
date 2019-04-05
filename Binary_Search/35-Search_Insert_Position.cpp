//
// Created by authetic on 2019/4/5.
//

/*
 * 寻找一个数字在有序数组中的位置
 * 直接遍历找第一个比该数字大的位置，一开始用二分，想多了！
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i ++ ) {
            if (nums[i] >= target) return i;
            if (i == nums.size() - 1) return i+1;
        }
        return 0;
    }
};