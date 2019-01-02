//
// Created by authetic on 2018/12/31.
//

/*
 * Description: Give an array, which value represents
 * the maximum length you can jump, start at the 0,
 * determine if you can reach the last index.
 *
 * Choose the biggest index you can reach every time,
 * while the "big" depends on next - index + nums[next], if
 * next == index && next != nums.size() - 1, return false!
 */

class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.empty() || nums.size() == 1) {
            return true;
        }
        int index = 0;
        while (index < nums.size()-1) {
            int max = 0, next = index;
            for (int i = index + 1; i <= index + nums[index]; i ++ ) {
                if (i - index + nums[i] >= max) {
                    next = i;
                    max = i - index + nums[i];
                }
            }
            if (index == next) return false;
            index = next;
        }
        return true;
    }
};