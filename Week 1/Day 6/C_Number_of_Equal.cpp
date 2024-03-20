// Problem Link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C

#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    int l = 0, r = 0; 
    ll pr = 0;
    while(l < n && r < m)
    {
        int cnt1 = 0, cnt2 = 0, curr = a[l];
        while(a[l] == curr && l < n)
        {
            cnt1++;
            l++;
        }
        while(curr > b[r]) r++;
        while(b[r] == curr && r < m)
        {
            cnt2++;
            r++;
        }
        pr += (1LL * cnt1 * cnt2);
    }
    cout << pr << endl;
    return 0;
}
