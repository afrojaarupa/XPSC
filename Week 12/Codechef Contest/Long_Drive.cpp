#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y, ans;
        cin >> x >> y;
        
        ans = ( 10*(y-x)  + 99 - y) / (100 - y);

        cout << ans << endl;
    }
    
    return 0;
}
