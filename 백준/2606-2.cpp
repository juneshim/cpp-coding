#include <iostream>
#include <string>
#include <vector>

using namespace std;

int ans=0;
vector<int> v[101];
bool visited[101];

void dfs(int n) {
    visited[n] = true;
    for (int i : v[n]) {
        if (!visited[i]) {
            ans++;
            dfs(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b; cin >> n >> m;
    
    while (m--)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    cout << ans << endl;
    
    return 0;
}