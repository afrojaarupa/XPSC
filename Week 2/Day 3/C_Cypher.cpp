// Problem Link: https://codeforces.com/problemset/problem/1703/C

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<string> s(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) 
        {
            int x;
            cin >> x;
            cin >> s[i];
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < s[i].size(); j++)
            {
                if(s[i][j] == 'U')
                {
                    if(a[i] == 0) a[i] = 9;
                    else a[i]--;
                }
                else
                {
                    if(a[i] == 9) a[i] = 0;
                    else a[i]++;
                }
            }
        }
        for(int i= 0; i < n; i++) 
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
