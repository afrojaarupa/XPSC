// Problem Link: https://codeforces.com/problemset/problem/1692/B

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
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        int ans = s.size();
        if((n - ans) % 2 == 1) ans--;
        cout << ans <<endl;
    }

    return 0;
}
