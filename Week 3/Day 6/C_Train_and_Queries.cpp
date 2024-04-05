// Problem Link: https://codeforces.com/problemset/problem/1702/C

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n];
        map<int, pair<int, int>> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(!mp.count(a[i])) {
                mp[a[i]].first = i;
                mp[a[i]].second = i;
            }
            else mp[a[i]].second = i;
        }
        while (q--)
        {
            int s, d;
            cin >> s >> d;
            
            if(!mp.count(s) || !mp.count(d) || mp[s].first > mp[d].second) {
                cout << "NO" << endl;            
            }else{
                cout << "YES" << endl;
            }

        }
    }

    return 0;
}
