#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x)
{
    if (x < 2)
        return false;
    if (x == 2 || x == 3)
        return true;
    if (x % 2 == 0 || x % 3 == 0)
        return false;
    for (int i = 5; i * i <= x; i += 6)
    {
        if (x % i == 0 || x % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int d;
        cin >> d;

        int x = d + 1;
        while (!is_prime(x)) x++;

        int y = d + x;
        while (!is_prime(y)) y++;

        cout << (x * y) << endl;
    }

    return 0;
}