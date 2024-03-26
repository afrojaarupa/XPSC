// Problem Link: https://codeforces.com/problemset/problem/1883/B

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int frq[26] = {0};
        int n, k;
        string s;
        cin >> n >> k >> s;
        
        for(int i = 0; i < n; i++)
        {
            frq[s[i]-'a']++;
        }
        bool flag = true;
        int cnt = 0;
        for(int i = 0; i < 26; i++)
        {
            if(frq[i] % 2 != 0) cnt++;
        }
        if(cnt > k+1) flag = false;

        if(flag) cout << "YES" << endl;
        else cout << "NO" <<endl;
    }

    return 0;
}
