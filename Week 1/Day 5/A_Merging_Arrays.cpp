// Problem Link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    long long int a[n], b[m];
    vector<long long int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0;
    while(l < n && r < m)
    {
        if(a[l] <= b[r])
        {
            v.push_back(a[l]);
            l++;
        }
        else
        {
            v.push_back(b[r]);
            r++;
        }
    }
    if(l < n)
    {
        for(int i = l; i < n; i++) v.push_back(a[i]);
    }
    else if(r < m)
    {
        for(int i = r; i < m; i++) v.push_back(b[i]);
    }
    for(int i = 0; i < n+m; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
