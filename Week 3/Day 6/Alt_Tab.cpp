// Problem Link: https://www.codechef.com/problems/ALTTAB?tab=statement

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<string> s(n);
	for (int i=0; i<n; i++) {
	    cin >> s[i];
	}
	    
	map<string, int> mp;
	string ans = "";
	    
	for (int i = s.size()-1; i>=0; i--) {
	    string cur = s[i];
	        
	    if (mp.find(cur) == mp.end()){
            ans += cur[cur.size() - 2];
            ans += cur[cur.size() - 1];
            mp[cur]++;
        }        
	}
	    
	cout << ans << endl;
    return 0;
}
