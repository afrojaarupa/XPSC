#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n == 1) {
        return false;
    }

    for (long long i = 2;i * i <= n;i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPerfectSquare(long long n) {
    long long x = sqrtl(n);
    return (x * x) == n;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin >> n;

    while (n--)
    {
        long long int x;
        cin >> x;
        cout << (isPrime(sqrtl(x)) && isPerfectSquare(x) ? "YES" : "NO" ) << endl;
    }

    return 0;
}