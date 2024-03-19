#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int w_cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'W') w_cnt++;
        }
        if(w_cnt > 0 && s[n-1] != 'W' || s[n-2] != 'W') cout<<"NO"<<endl;
        else if(n == 1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }

    return 0;
}
