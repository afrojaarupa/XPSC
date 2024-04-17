// Problem Link: https://www.codechef.com/problems/BOX95

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr+n, greater<ll>());
        
        ll ans = 0, XOR = 0;
        for(int i = 0; i < n; i++)
        {
            if( arr[i] > XOR )
            {
                XOR = 0;
                ans++;
            }
            XOR ^= arr[i];
        }
        cout << ans << endl;
    }
    
    return 0;
}
