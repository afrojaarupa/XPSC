#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> ans[1007];
        int res[1007];

        for (int i = 1; i <= 1000; i++) ans[i].clear();

        for (int i = 1; i <= n; ++i) 
        {
            int x;
            cin >> x;
            int factor = 0;
            for (int j = 2; j * j <= x; j++) 
            {
                if (x % j == 0) 
                {
                    factor = j;
                    break;
                }
            }
            if (factor == 0) factor = x;
            ans[factor].push_back(i);
        }
        
        int ret = 0;
        for (int i = 1; i <= 1000; i++) 
        {
            if (!ans[i].empty()) 
            {
                ret++;
                for (auto c : ans[i]) res[c] = ret;
            }
        }
        
        cout << ret << endl;
        for (int i = 1; i <= n; ++i) 
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
