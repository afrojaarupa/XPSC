#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, l, r, mx_happy = 0, mn_happy = 0, cur = 0;
        cin >> n >> l >> r;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if((a[i] >= l) && (a[i] <= r))
            {
                cur++;
            }
            else cur--;
            mx_happy = max(cur, mx_happy);
            mn_happy = min(cur, mn_happy);
        }
        cout << mx_happy << " " << mn_happy << endl;
    }

    return 0;
}
