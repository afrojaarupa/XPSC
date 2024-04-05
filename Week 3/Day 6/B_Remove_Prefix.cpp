// Problem Link: https://codeforces.com/problemset/problem/1714/B

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
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int ans = 0;
        set<int> s;
        for (int i = n - 1; i >= 0; i--) {
            if (s.count(a[i])) {
                ans = i+1;
                break;
            }
            s.insert(a[i]);
        }
        
        cout << ans << endl;

    }

    return 0;
}
