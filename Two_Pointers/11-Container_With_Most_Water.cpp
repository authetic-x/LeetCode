//
// Created by authetic on 2019/2/13.
//

/*
 * Classic kind of Two Pointers, define l and r
 * starting from the index 0 and size-1, update
 * maxArea with bigger container, move the shorter
 * index of the two line.
 */

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0, l = 0, r = height.size()-1;
        while(l < r) {
            maxarea = max(maxarea, min(height[l], height[r])
                                   * (r-l));
            if (height[l] < height[r]) {
                l ++;
            } else {
                r --;
            }
        }
        return maxarea;
    }
};