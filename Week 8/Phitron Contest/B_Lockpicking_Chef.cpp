#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s, s2;
        cin >> s >> s2;
        int l = 0, r = 0, x = 0;
        long long sum = 0, ans = INT_MAX;
        while (r < n) 
        {
            sum += abs(s[r] - s2[x]);
            if ((r - l + 1) == s2.size()) 
            {
                ans = min(ans, sum);
                sum = 0;
                x = 0;
                l++;
                r++;
            }
            else 
            {
                r++;
                x++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
