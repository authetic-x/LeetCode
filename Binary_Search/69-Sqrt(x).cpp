//
// Created by authetic on 2019/4/5.
//

/*
 * 实现函数Sqrt的功能
 * 二分法找到最接近x的数
 */

class Solution {
public:
    int mySqrt(int x) {
        long l = 0, r = INT_MAX;
        while (l <= r) {
            long mid = (l + r) / 2;
            if (mid * mid <= x && (mid+1)*(mid+1) > x) {
                return mid;
            }
            if (mid * mid < x) l = mid + 1;
            else r = mid - 1;
        }
        return 0;
    }
};