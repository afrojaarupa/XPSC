// Problem Link: https://codeforces.com/problemset/problem/1722/C

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
        vector<long long int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        priority_queue<long long int, vector<long long int>, greater<long long int>> pq;
        sort(v.begin(),v.end());
        int k = 1;
        while(k != n-2)
        {
            pq.push(v[k-1]);
            if(v[k] != v[k-1]+1) pq.push(v[k-1]+1);
            else 
            {
                pq.push(v[k]);
                k++;
            }
        }
        while(!pq.empty())
        {
            cout << pq.top() << " ";
            pq.pop();
        }
        cout << endl;
    }

    return 0;
}
