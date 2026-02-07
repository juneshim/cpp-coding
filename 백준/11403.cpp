#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[101];
bool visited[101];
int n;

void dfs(int cur) {
    for (int next : graph[cur]) {
        if (!visited[next]) {
            visited[next] = true;
            dfs(next);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (x == 1) {
                graph[i].push_back(j);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        fill(visited, visited + n, false);
        dfs(i);

        for (int j = 0; j < n; j++) {
            cout << (visited[j] ? 1 : 0) << ' ';
        }
        cout << '\n';
    }

    return 0;
}