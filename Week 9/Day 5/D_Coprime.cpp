#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        map<int, int>mp;
        int a[n], b[n], ans = -1;

        for(int i = 1; i <= n; i++){
            cin >> a[i];
            mp[a[i]] = i;
        }
        for(auto x:mp){
            for(auto k:mp){
                if(__gcd(k.first, x.first) == 1){
                    ans = max(ans, (k.second + x.second));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
