#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int b;
        cin >> b;
        int cur = -1;
        int i = 0;
        while (i < n) {
            int ax;
            cin >> ax;
            if ((ax & b) == b)
                cur &= ax;
            i++;
        }

        if (cur == b)
            cout << "YES" <<endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}