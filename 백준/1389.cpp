#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int INF = 1e9;
    int N, M, a, b;
    cin >> N >> M;

    vector<vector<int>> dist(N + 1, vector<int>(N+1, INF));

    for (int i = 1; i <= N; i++) {
        dist[i][i] = 0;
    }
    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        dist[a][b] = 1;
        dist[b][a] = 1;
    }

    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (dist[i][j] > dist[i][k] + dist[k][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    int sum, answer=1, minSum = INF;

    for (int i = 1; i <= N; i++) {
        sum = 0;
        for (int j = 1; j <= N; j++) {
            sum += dist[i][j];
        }
        if (sum < minSum) {
            minSum = sum;
            answer = i;
        }
    }

    cout << answer << "\n";

    return 0;
}