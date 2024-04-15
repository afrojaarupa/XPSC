#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x, XOR = 0;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> x;
            XOR ^= x;
        }

        int ans;
        if (XOR == 0 || n % 2 == 1){
            ans = XOR;
        }else{
            ans = -1;
        }

        cout << ans << endl;

    }
    
    return 0;
}
