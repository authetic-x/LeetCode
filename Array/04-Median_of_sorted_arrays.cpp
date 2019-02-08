//
// Created by authetic on 2019/2/8.
//

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len = nums1.size() + nums2.size();
        int mid = (len + 1) / 2, i = 0, count = 0;
        double ans = 0;
        bool flag = false;
        for(int j = 0; j < nums2.size(); j ++ ) {
            while (nums1[i] < nums2[j]) {
                count ++;
                if (count == mid) {
                    if (len % 2 != 0) {
                        ans = double(nums1[i]);
                    } else {
                        if (!flag) {
                            mid ++;
                            ans += nums1[i];
                            flag = true;
                        } else {
                            ans += nums1[i];
                            ans /= 2;
                        }
                    }
                }
                i ++;
            }
            count ++;
            if (count == mid) {
                if (len % 2 != 0) {
                    ans = double(nums2[i]);
                } else {
                    if (!flag) {
                        mid ++;
                        ans += nums2[i];
                        flag = true;
                    } else {
                        ans += nums2[i];
                        ans /= 2;
                    }
                }
            }
            j ++;
        }
        while (i < nums1.size()) {
            if (count == mid) {
                if (len % 2 != 0) {
                    ans = double(nums1[i]);
                } else {
                    if (!flag) {
                        mid ++;
                        ans += nums1[i];
                        flag = true;
                    } else {
                        ans += nums1[i];
                        ans /= 2;
                    }
                }
            }
            i ++;
        }
        return ans;
    }
};