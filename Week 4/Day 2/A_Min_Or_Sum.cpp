// Problem Link: https://codeforces.com/problemset/problem/1635/A

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, x, ans = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            ans |= x;
        }
        cout << ans << endl;
    }
}
