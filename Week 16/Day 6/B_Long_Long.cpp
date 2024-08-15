// Problem Link: https://codeforces.com/problemset/problem/1843/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, sum = 0;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
            sum += abs(a[i]);
        }
        int l = 0, r = 0, cnt = 0;
        bool flag = false;
        while (r < n)
        {
            if (a[r] < 0 && !flag)
            {
                flag = true;
                cnt++;
            }

            if (a[r] > 0)
            {
                flag = false;
                while (a[l] <= 0 && l < r)
                {
                    l++;
                }
            }
            r++;
        }
        cout << sum << " " << cnt << endl;

    }

    return 0;
}