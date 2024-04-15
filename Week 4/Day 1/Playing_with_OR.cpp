#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int count = 0;
        for (int i = 0; i <= n - k; i++) {
            bool odd_exists = false;
            for (int j = i; j < i + k; j++) {
                if (arr[j] % 2 != 0) {
                    odd_exists = true;
                    break;
                }
            }
            if (odd_exists) count++;
        }
        
        cout << count << endl;
    }
    
    return 0;
}
