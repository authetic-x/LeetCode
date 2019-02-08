//
// Created by authetic on 2019/2/8.
//

/*
 * Easy
 * Give an array and a target, choose two different nums
 * adding up to the target, return indices of the two numbers.
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i ++ ) {
            int one = nums[i];
            for (int j = i+1; j < nums.size(); j ++ ) {
                if (nums[j] + one == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};