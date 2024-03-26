// Problem Link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C

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
    ll l = 0, r = 0, ans = 0, sum = 0;
    while(r < n)
    {
        sum += a[r];
        if(sum <= s) ans += r - l + 1;
        else
        {
            while(sum > s && l < r)
            {
                sum -= a[l];
                l++;
            }
            if(sum <= s) ans += r - l +1;
        }
       r++; 
    }
    cout << ans << endl;
    
    return 0;
}
