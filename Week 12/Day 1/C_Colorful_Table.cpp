#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> v(n);
        set<ll> s;

        for(int i = 0; i < n; i++) 
        {
            cin >> v[i];
            s.insert(v[i]);
        }        

        ll mx = 0, mn = n-1;
        for(int i = 1; i <= k; i++) 
        {
            if(s.count(i) == 0) cout << "0 ";
            else 
            {
                while (mx <= mn && v[mx] < i) mx++;
                while (mx <= mn && v[mn] < i) mn--; 
              
                cout << 2*(abs(mx-mn)+1) << " ";
            } 
        }
        cout << endl;
    }
    
    return 0;
}