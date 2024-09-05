#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;

        vector<int> v;
        int l = 1, r = INT_MAX, s = 0;

        for (int i = 0; i < n; i++) 
        {
            int a, b;
            cin >> a >> b;

            if (a == 1) l = max(l, b);
            else if (a == 2) r = min(r, b);
            else if (a == 3) v.push_back(b);
        }

        for (int i = 0; i < v.size(); i++) 
        {
            if (v[i] >= l && v[i] <= r) 
            {
                s++;
            }
        }

        cout << max(r - l + 1 - s, 0) << endl;
    }
    
    return 0;
}
