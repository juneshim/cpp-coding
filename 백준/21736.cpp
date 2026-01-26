#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N, M, ans;
vector<vector<int>> space, visited;

void spann(int n, int m) {
    visited[n][m] = 1;
    if (space[n][m] == -1) return;
    if (space[n][m] == 1) ans++;
    if (n-1>=0 && !visited[n-1][m]) spann(n-1,m);
    if (n+1<N && !visited[n+1][m]) spann(n+1,m);
    if (m-1>=0 && !visited[n][m-1]) spann(n,m-1);
    if (m+1<M && !visited[n][m+1]) spann(n,m+1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    space.resize(N, vector<int>(M));
    visited.resize(N, vector<int>(M));

    int n, m, temp, idx;
    char c;
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> c;
            if (c == 'O') temp = 0;
            if (c == 'X') temp = -1;
            if (c == 'P') temp = 1;
            if (c == 'I') {temp = 2; n = i; m = j;}
            space[i][j] = temp;
        }
    }
    ans = 0;
    spann(n, m);
    if (ans) cout << ans << endl;
    else cout << "TT" << endl;

    return 0;
}