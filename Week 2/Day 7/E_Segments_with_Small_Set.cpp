// Problem Link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0,r=0;
    map<int, int>mp;
    long long ans=0;
    while (r<n)
    {
        mp[a[r]]++;
        while (mp.size()>k)
        {
            mp[a[l]]--;
            if (mp[a[l]]==0)
            {
                mp.erase(a[l]);
            }
            l++;
        }
        ans+=r-l+1;
        r++;
    }

    cout <<ans<< endl;

    return 0;
}
