//  Problem Link: https://codeforces.com/problemset/problem/1841/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        vector<int> v;
        int cnt = 0;

        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            int nw_cnt = cnt;
            if (!v.empty() && v.back() > x)
            {
                nw_cnt++;
            }
            if (nw_cnt == 0 || (nw_cnt == 1 && x <= v[0]))
            {
                v.push_back(x);
                cnt = nw_cnt;
                cout << "1";
            }
            else cout << "0";
        }
        cout << endl;
    }

    return 0;
}
