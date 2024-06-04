#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 5;

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.second == b.second) return a.first > b.first;
        else return a.second < b.second;
    }
};

int main()
{
    int q, c = 0;
    cin >> q;
    queue<int> q_;
    bool r[N] = {false};
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    while (q--)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            int h_amount;
            cin >> h_amount;
            c++;

            q_.push(c);
            pq.push({c, h_amount});
        }
        else if (op == 2)
        {
            int id = q_.front();
            while (r[id])
            {
                q_.pop();
                id = q_.front();
            }

            r[id] = true;
            cout << id << " ";
        }
        else
        {
            int id = pq.top().first;
            while (r[id])
            {
                pq.pop();
                id = pq.top().first;
            }

            r[id] = true;

            cout << id << " ";
        }
    }

    cout << endl ;

    return 0;
}