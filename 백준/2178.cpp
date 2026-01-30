#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int N, M;
bool visited[100][100];
vector<vector<int>> v;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(int x, int y) {
    queue<pair<int,int>> q;
    q.push({x, y});
    visited[x][y] = true;

    while (!q.empty()) {
        auto [cx, cy] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if (visited[nx][ny]) continue;
            if (v[nx][ny] == 0) continue;

            visited[nx][ny] = true;
            v[nx][ny] = v[cx][cy] + 1;
            q.push({nx, ny});
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    v.resize(N, vector<int>(M));

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < M; j++) {
            v[i][j] = s[j] - '0';
        }
    }

    bfs(0, 0);
    cout << v[N-1][M-1];
}