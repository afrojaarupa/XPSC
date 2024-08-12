#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int n, m;
    cin >> n >> m;
    ll a[n], b[m], c[n + m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int l = 0, r = 0, x = 0;
    while(l < n && r < m)
    {
        if(a[l] <= b[r])
        {
            c[x] = a[l];
            l++;
        }
        else
        {
            c[x] = b[r];
            r++;
        }
        x++;
    }
    if(l < n) 
    {
        for (int i = l; i < n; i++) 
        {
            c[x] = a[i];
            x++;
        }
    }
    else if(r < m) 
    {
        for (int i = r; i < m; i++) 
        {
            c[x] = b[i];
            x++;
        }
    }

    for(int i = 0; i < n+m; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    
    return 0;
}
