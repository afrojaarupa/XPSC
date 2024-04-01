// Problem Link: https://codeforces.com/problemset/problem/1790/D

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
        cin >> n;
        ll a[n];
        ll ans = 0;
        priority_queue<int, vector<int>> pq;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] != 0) pq.push(a[i]);
            else if(a[i] == 0 && !pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
        }
        
        cout <<ans << endl;
        
    }

    return 0;
}
