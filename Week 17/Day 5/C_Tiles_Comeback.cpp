#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int l = 0, r = 0, i = 0, j = n - 1;
        int k_l = k, k_r = k;

        if (a[0] == a[n - 1])
        {
            k_l = k / 2;
            k_r = k - k_l;
        }

        for(; i < n && l < k_l; i++)
        {
            if(a[i] == a[0]) l++;
        }
        for(; j >= 0 && r < k_r; j--)
        {
            if(a[j] == a[n - 1]) r++;
        }

        if ((i - 1) < (j + 1)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }  
    return 0; 
}
