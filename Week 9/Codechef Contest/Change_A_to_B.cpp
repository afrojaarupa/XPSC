#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, k, ans = 0;
        cin >> a >> b >> k;

        while (a != b) {
            if (b % k == 0 && b / k >= a) {
                b /= k;
                ans++;
            } else if (b % k == 0) {
                ans += b - a;
                a = b;
            } else {
                ans += b % k;
                b -= b % k;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}