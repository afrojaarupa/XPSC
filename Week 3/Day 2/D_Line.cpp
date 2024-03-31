// Problem Link: https://codeforces.com/problemset/problem/1790/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; 
        string s;
        cin >> n >> s;
        ll sum = 0;
        vector<ll> v;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'L')
            {
                v.push_back(n - 1 - i - i);
                sum += i;
            } 
            else 
            {
                v.push_back(i - (n - 1 - i));
                sum += n - i - 1;
            }

        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i = 0; i < n; i++)
        {
            if(v[i] > 0) sum += v[i];
            cout << sum << " ";
        }
        cout << endl;

    }

    return 0;
}
