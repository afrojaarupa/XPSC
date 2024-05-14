#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<int> p, ng;
        for (int i = 0; i < n; ++i) 
        {
            int x;
            cin >> x;
            if (x >= 0) p.push_back(x);
            else ng.push_back(-x);
        }

        sort(p.begin(), p.end(), greater<int>());
        sort(ng.begin(), ng.end(), greater<int>());

        long long sum_pos = 0, sum_neg = 0, max_distance = 0;

        for (int i = 0; i < p.size(); i += k) sum_pos += p[i];
        for (int i = 0; i < ng.size(); i += k) sum_neg += ng[i];
        
        if (!p.empty()) max_distance = p[0];
        if (!ng.empty() && ng[0] > max_distance) max_distance = ng[0];

        long long total_distance = 2 * (sum_pos + sum_neg) - max_distance;
        cout << total_distance << endl;
    }

    return 0;
}
