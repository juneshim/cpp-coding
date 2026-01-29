#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    const int MAX = 100000;
    const int INF = 1e9;

    vector<int> dist(MAX + 1, INF);
    queue<int> q;

    dist[N] = 0;
    q.push(N);

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        if (cur == K) break;

        if (cur - 1 >= 0 && dist[cur - 1] > dist[cur] + 1) {
            dist[cur - 1] = dist[cur] + 1;
            q.push(cur - 1);
        }

        if (cur + 1 <= MAX && dist[cur + 1] > dist[cur] + 1) {
            dist[cur + 1] = dist[cur] + 1;
            q.push(cur + 1);
        }

        if (cur * 2 <= MAX && dist[cur * 2] > dist[cur] + 1) {
            dist[cur * 2] = dist[cur] + 1;
            q.push(cur * 2);
        }
    }

    cout << dist[K] << '\n';

    return 0;
}