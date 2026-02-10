#include <iostream>
#include <string>
#include <queue>

using namespace std;

int n, m;
int board[1000][1000];
int dist[1000][1000];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    int sx = -1, sy = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
            dist[i][j] = -1;

            if (board[i][j] == 2) {
                sx = i;
                sy = j;
            }
        }
    }

    queue<pair<int,int>> q;
    q.push({sx, sy});
    dist[sx][sy] = 0;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;

            if (board[nx][ny] == 1 && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 0)
                cout << 0 << " ";
            else
                cout << dist[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}