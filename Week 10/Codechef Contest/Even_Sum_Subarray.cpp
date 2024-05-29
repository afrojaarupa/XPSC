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
        vector<int> a(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }

        long long int  l = 0, r = 0, mx = 0, sum = 0;

        while(l < n)
        {
            sum += a[l];

            if (sum % 2 == 0) 
            {
                mx = max(mx, (l-r+1));
            }
            else
            {
                while(r < l)
                {
                    if ((sum - a[r]) % 2 == 0) 
                    {
                        mx = max(mx, l - r);
                    }
                    r++;
                }
                r = 0;
            }
            l++;
        }
 
        cout << mx << endl;
    }

    return 0;
}
