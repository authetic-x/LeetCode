//
// Created by authetic on 2019/4/4.
//

/*
 * 在有序旋转数组中查找一个值并返回下标，否则返回-1
 * 二分查找，每次只需要确定mid在旋转数组的那一侧，
 * 注意数组筛选过程中，数组有可能是完全有序的
 */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] > nums[r]) {
                if (nums[mid] > target && target >= nums[l]) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            } else if (nums[mid] < nums[l]) {
                if (nums[mid] < target && target <= nums[r]) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            } else {
                if (target < nums[mid]) r = mid - 1;
                else l = mid + 1;
            }
        }
        return -1;
    }
};