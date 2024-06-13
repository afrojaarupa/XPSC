#include<bits/stdc++.h>
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

        vector<ll> v(n);
        ll sum = 0, ans = 0, mx = 0;

        for(int i = 0; i < n; i++) 
        {
            cin >> v[i];
            if(v[i] > 0) sum += v[i]; 
        }

        for(int i = 0; i < n; i++) 
        {
            if(i % 2 == 0) 
            {
                if(v[i] > 0) 
                {
                    mx = max(mx, sum);
                    sum -= v[i];
                } 
                else mx = max(mx, sum+v[i]);
            } 
            else 
            {
                if(v[i] > 0) 
                {
                    sum -= v[i];
                    mx = max(mx, sum);
                } 
                else mx = max(mx, sum);
            }
        }
        cout << (ans + mx) << endl;
    }
    
    return 0;
}