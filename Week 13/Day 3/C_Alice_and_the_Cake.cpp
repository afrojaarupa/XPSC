#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> v(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        sort(v.begin(), v.end());

        priority_queue<ll> pq;
        pq.push(sum);

        while (!v.empty())
        {
            ll a = pq.top();
            pq.pop();

            int b = v.back();

            if (a < b) break;

            if (a == b)
            {
                v.pop_back();
                continue;
            }
            pq.push(a / 2);
            pq.push((a + 1) / 2);
        }

        if (v.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
