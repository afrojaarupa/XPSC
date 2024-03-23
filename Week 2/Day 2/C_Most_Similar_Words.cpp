// Problem Link: https://codeforces.com/problemset/problem/1676/C

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v;
        for(int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        int ans = INT_MAX;

        for (int i = 0; i < n-1; i++)
        {
            string curr = v[i];
            for (int j = i+1; j < n; j++)
            {
                string cmp = v[j];
                int sum = 0;
                for (int k = 0; k < m; k++)
                {
                    sum += abs(cmp[k]-curr[k]);
                }
                ans = min(ans, sum);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
