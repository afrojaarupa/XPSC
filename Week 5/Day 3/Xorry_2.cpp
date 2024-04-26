#include "bits/stdc++.h"
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long x, pow2, diff, zeros = 0;
        cin >> x;
        
        pow2 = pow(2, floor(log2(x)));
        diff = x - pow2;

        while (diff > 0) {
            if (diff % 2 == 0) {
                zeros++;
            }
            diff /= 2;
        }
        
        cout << (1 << zeros) << endl;
    }
    return 0;
}
