// Problem Link: https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n, x;
    cin >> n >> x;
    long long a[n];
    queue<int> q;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] != x) q.push(a[i]); 
    }
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
