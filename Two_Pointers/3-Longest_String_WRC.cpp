//
// Created by authetic on 2019/2/15.
//

/*
 * Give a string, find the longest substring with no
 * repeat chars.
 * Two Pointers Problem, you can record each char with
 * Set or Map, apparently Map is better, so Solution 2
 * is much faster than Solution 1.
 */

// Solution 1
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int ans = 0, i = 0, j = 0, len = s.length();
        while (i < len && j < len) {
            if (st.find(s[j]) == st.end()) {
                st.insert(s[j++]);
                ans = max(ans, j-i);
            } else {
                st.erase(s[i++]);
            }
        }
        return ans;
    }
};

// Solution 2
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size();
        int i = 0, j = 0, ans = 0;
        int book[256] = {0};
        while (i < len && j < len) {
            if (book[s[j]] == 0) {
                book[s[j]] = 1;
            } else {
                ans = max(ans, j - i);
                while (s[i] != s[j]) {
                    book[s[i]] = 0;
                    i ++;
                }
                i ++;
            }
            j ++;
        }
        return max(ans, j - i);
    }
};