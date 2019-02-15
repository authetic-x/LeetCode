//
// Created by authetic on 2019/2/15.
//

/*
 * Give an array, find all three triples adding to 0,
 * Two Pointers problem, sort and circulate the array,
 * time complexity is O(n^2).
 */

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int len = nums.size();
        if (len == 0) return ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len; i ++ ) {
            if (i != 0 && nums[i] == nums[i-1]) continue;
            int j = i + 1, k = len-1;
            while (j < k) {
                if (nums[i]+nums[j]+nums[k] == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j ++;
                    k --;
                    while (j < k && nums[j] == nums[j-1]) j++;
                    while (j < k && nums[k] == nums[k+1]) k--;
                } else if (nums[i]+nums[j]+nums[k] < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return ans;
    }
};