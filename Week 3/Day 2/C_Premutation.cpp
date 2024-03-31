#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> inputs(n, vector<int>(n - 1));
        vector<int> count(n + 1, 0);

        // Read inputs and count occurrences of each number
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n - 1; ++j) {
                cin >> inputs[i][j];
                count[inputs[i][j]]++;
            }
        }

        // Find the number that occurs only once
        int missing_num = 0;
        for (int i = 1; i <= n; ++i) {
            if (count[i] == 1) {
                missing_num = i;
                break;
            }
        }

        // Reconstruct the original permutation
        vector<int> original(n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n - 1; ++j) {
                if (inputs[i][j] == missing_num) {
                    original[j] = missing_num;
                    break;
                }
            }
        }

        // Insert the missing number at the correct position
        for (int i = 0; i < n; ++i) {
            if (original[i] == 0) {
                original[i] = missing_num;
                break;
            }
        }

        // Print the reconstructed permutation
        for (int i = 0; i < n; ++i) {
            cout << original[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
