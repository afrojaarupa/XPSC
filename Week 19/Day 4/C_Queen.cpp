#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<int> a(n + 1);
    vector<int> b(n + 1);
    vector<vector<int>> c(n + 1);

    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i] >> b[i];
        if (a[i] != -1) c[a[i]].push_back(i);
    }

    vector<int> ans;

    for (int i = 1; i <= n; i++) 
    {
        if (b[i] == 1) 
        {
            bool del = true;
            for (int child : c[i]) 
            {
                if (b[child] == 0) 
                {
                    del = false;
                    break;
                }
            }
            if (del) ans.push_back(i);
        }
    }

    if (ans.empty()) cout << -1 << endl;
    else 
    {
        sort(ans.begin(), ans.end());
        for (int x : ans) 
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
