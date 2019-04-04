//
// Created by authetic on 2019/3/14.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++ ) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < c && b < c) {
            cout << 0 << endl;
            continue;
        }
        if (a == c || b == c) {
            cout << 1 << endl;
            continue;
        }
        if (a > c && b > c) {
            cout << 2 << endl;
            continue;
        }
        int ans = 1;
        if (a < b) swap(a, b);
        while (a - c > b) {
            a = a - b;
            ans  += 2;
        }
        ans ++;
        cout << ans << endl;
    }
    return 0;
}