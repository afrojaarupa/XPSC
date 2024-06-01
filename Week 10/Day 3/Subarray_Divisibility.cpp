#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long freq[n], pre = 0, cnt = 0, a;
    memset(freq, 0, sizeof(freq));
    freq[0] = 1;

    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        pre = (pre + a) % n;
        pre = pre < 0 ? pre + n : pre;
        cnt += freq[pre];
        freq[pre]++;
    }

    cout << cnt << endl;
    
    return 0;
}
