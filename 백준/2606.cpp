#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> graph[101];
bool visited[101];
int cnt = 0;

void dfs(int cur) {
    visited[cur] = true;

    for (int next : graph[cur]) {
        if (!visited[next]) {
            cnt++;
            dfs(next);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);
    cout << cnt << '\n';

    return 0;
}
