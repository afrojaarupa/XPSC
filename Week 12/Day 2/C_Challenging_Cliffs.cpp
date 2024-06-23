#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        if(n == 2)
        {
            cout << v[0] << " " << v[1] << endl;
            continue;
        }

        int pos = -1, mn = INT_MAX;

        for (int i = 1;i < n; i++)
        {
            if(mn > abs(v[i] - v[i - 1]))
            {
                pos = i;
                mn = abs(v[i] - v[i - 1]);
            }
        }
        
        for (int i = pos; i < n; i++)
        {
            cout << v[i] << " ";
        }
        for(int i = 0; i < pos; i++)
        {
            cout << v[i] << " ";
        }

        cout << endl;

    }
}