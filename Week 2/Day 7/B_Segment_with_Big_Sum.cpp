// Problem Link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    int n;
    ll s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 0, ans = INT_MAX, sum = 0;
    while(r < n)
    {
        sum += a[r];
        while(sum >= s)
        {
            ans = min(ans, r - l + 1);
            sum -= a[l];
            l++;
        }
        r++;
    }

    if (ans == INT_MAX) ans = -1;

    cout << ans << endl;
    
    return 0;
}