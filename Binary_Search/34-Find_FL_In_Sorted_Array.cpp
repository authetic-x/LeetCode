//
// Created by authetic on 2019/4/4.
//

/*
 * 给出一个有序数组，返回目标数字的起始下标和终止下标，
 * 没找到返回[-1,-1]
 */

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] == target) {
                int st = mid, ed = mid;
                while (st >= 0) {
                    if (nums[st] == target) st--;
                    else break;
                }
                while (ed <= nums.size()-1) {
                    if (nums[ed] == target) ed++;
                    else break;
                }
                vector<int> res(2);
                res[0] = st+1, res[1] = ed-1;
                return res;
            }
            if (target > nums[mid]) l = mid+1;
            else r = mid-1;
        }
        vector<int> res(2);
        res[0] = -1, res[1] = -1;
        return res;
    }
};