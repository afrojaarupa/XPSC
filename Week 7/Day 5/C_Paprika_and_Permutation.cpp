//  Problem Link: https://codeforces.com/problemset/problem/1617/C

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
        for(int i = 1; i <= n; i++) s.insert(i);
        vector<int> remain;
        for(int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            if(s.find(v) != s.end()) s.erase(v);
            else remain.push_back(v);
        }

        sort(remain.begin(), remain.end());
        reverse(remain.begin(), remain.end());

        int pt = 0;
        bool perm = false;
        for(auto &nx : remain)
        {
            auto it = s.end();
            it--;
            int ctg = *it;
            if(ctg > (nx-1)/2)
            {
                perm = true;
                break;
            }
            s.erase(it);
        }
        if(perm) cout << "-1" << endl;
        else cout << remain.size() << endl;
    }

    return 0;
}
