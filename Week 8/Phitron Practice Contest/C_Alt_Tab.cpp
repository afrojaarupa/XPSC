#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    map<string, int> mp;
    vector<string> st;
    vector<string> st2;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        st.push_back(s);
    }

    for (int i = n-1; i >= 0; i--)
    {
        if (mp[st[i]] != 1)
        {
            st2.push_back(st[i]);
            mp[st[i]]++;
        }
    }
    
    for (int i=0; i<st2.size(); i++) 
    {
        int j = st2[i].size();
        cout << st2[i][j-2] << st2[i][j-1];
    }

    
    return 0;
}
