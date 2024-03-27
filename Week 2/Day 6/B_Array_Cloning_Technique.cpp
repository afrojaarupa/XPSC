// Problem Link: https://codeforces.com/problemset/problem/1665/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int,int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int mx = 0, ans = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            mx= max(mx,it->second);
        }
        while(true)
        {
            if(mx == n)
            {
                break;
            }
            int ex = n - mx, add = mx;
            ans++;
            ans += min(add, ex);
            mx += min(add, ex); 

        }
        cout << ans << endl;
    }

    return 0;
}
