#include <bits/stdc++.h>
using namespace std;

#define ll long long int
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b, l;
        cin >> a >> b >> l;
        set<ll> st;
        for (ll x = 0; pow(a, x) <= l; x++) {
            for (ll y = 0; pow(b, y) <= l; y++) {
                ll res = pow(a, x) * pow(b, y);
                if (l % res == 0){
                    st.insert(l / res);
                }
            }
        }
        cout << st.size() << endl;

    }
    return 0;
}
