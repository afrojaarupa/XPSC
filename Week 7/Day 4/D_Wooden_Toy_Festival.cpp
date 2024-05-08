//  Problem Link: https://codeforces.com/problemset/problem/1840/D

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        auto it = [&](int mid) 
        {
            int l = 0, cnt = 1;
            for (int i = 0; i < n; i++) 
            {
                if ((v[i] - v[l]) > (2 * mid)) 
                {
                    cnt++;
                    l = i;
                }
            }
            return cnt <= 3;
        };

        int l = 0, r = 1e9, mid, ans = 0;
        while (l <= r) 
        {
            mid = l + (r - l) / 2;
            if (it(mid)) 
            {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << ans << endl;
    }
    return 0;
}