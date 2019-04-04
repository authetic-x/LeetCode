//
// Created by authetic on 2019/3/14.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int q;
    cin >> s >> q;
    for (int i = 0; i < q; i ++ ) {
        int n, m, x, y, ans = 0;
        cin >> n >> m >> x >> y;
        int j = 0;
        while (j < s.length() && x > 0 && x <= n && y > 0 && y <= m) {
            if (s[j] == 'u') {
                x --;
                ans ++;
            } else if (s[j] == 'l') {
                y --;
                ans ++;
            } else if (s[j] == 'd') {
                x ++;
                ans ++;
            } else if (s[j] == 'r') {
                y ++;
                ans ++;
            }
            j ++;
        }
        cout << ans << endl;
    }
    return 0;
}