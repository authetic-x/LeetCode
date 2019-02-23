//
// Created by authetic on 2019/2/18.
//

/*
 * Just like the 3sum
 */

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> temp(4);
        int n = nums.size();
        if (n < 4) return res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i ++ ) {
            if (i != 0 && nums[i] == nums[i-1]) continue;
            int j = i+1;
            while(j < n-2) {
                if (j != i+1 && nums[j] == nums[j-1]) {
                    j ++;
                    continue;
                }
                int k = j+1, l = n-1;
                while(k < l) {
                    if (nums[i]+nums[j]+nums[k]+nums[l] == target) {
                        temp[0] = nums[i];
                        temp[1] = nums[j];
                        temp[2] = nums[k];
                        temp[3] = nums[l];
                        res.push_back(temp);
                        k ++, l --;
                        while (k < l && nums[k] == nums[k-1]) k ++;
                        while (k < l && nums[l] == nums[l+1]) l --;
                    } else if(nums[i]+nums[j]+nums[k]+nums[l] <                                    target) {
                        k ++;
                    } else {
                        l --;
                    }

                }
                j ++;
            }
        }
        return res;
    }
};