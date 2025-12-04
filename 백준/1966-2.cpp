#include <iostream>
#include <string>
#include <queue>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        int n, m; cin >> n >> m;

        deque<pair<int,int>> q;     
        priority_queue<int> pq;    

        for (int i = 0; i < n; ++i) {
            int p; cin >> p;
            q.emplace_back(p, i);
            pq.push(p);
        }

        int printed = 0;
        while (!q.empty()) {
            auto cur = q.front(); q.pop_front();
            int pr = cur.first;
            int idx = cur.second;

            if (pr == pq.top()) {
                pq.pop();
                ++printed;
                if (idx == m) {
                    cout << printed << '\n';
                    break; 
                }
            } else {
                q.push_back(cur);
            }
        }
    }
    return 0;
}