#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int a, b;
        cin >> a >> b;
        
        if (b == 1) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        cout << a << ' ' << a * b << ' ' << a * (++b) << endl;
    }
}
