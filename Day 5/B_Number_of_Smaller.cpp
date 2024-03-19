// Problem Link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    long long int a[n], b[m];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0, cnt = 0;
    while(j != m)
    {
        if(i != n && a[i] < b[j]) 
        {
            cnt++;
            i++;
        } 
        else 
        {
            j++;
            cout << cnt << " ";
        }
    }

    return 0;
}
