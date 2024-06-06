#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1;i <= n;i++) 
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }

    int sum = 0;
    bool ok = true;
    for (auto [idx, value] : mp) 
    {
        sum += value;
        if (sum > 2) 
        {
            ok = false;
            break;
        }
    }

    if (ok) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}