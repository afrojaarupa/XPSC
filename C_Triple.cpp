#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, val;
        cin >> n;
        long long int a[n];
        long long int frq[n+1] = {0};
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            frq[a[i]]++;
        }
        bool flag = false;
        for(int i = 1; i <= n; i++)
        {
            if(frq[i] >= 3)
            {
                flag = true;
                val = i;
                break;
            }
        }
        if(flag) cout<< val <<endl;
        else cout << "-1" <<endl;
    }

    return 0;
}
