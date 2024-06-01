#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long x, a;
    cin >> n >> x;

    map<long long, int> freq;
    freq[0] = 1;

    long long cnt = 0, pre = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        pre += a;
        cnt += freq[pre - x];
        freq[pre]++;
    }

    cout << cnt << endl;
    
    return 0;
}
