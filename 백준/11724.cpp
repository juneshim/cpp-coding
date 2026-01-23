#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b, x, count = 0; 
    cin >> n >> m;

    vector<bool> visited(n + 1, false);
    map<int, vector<int>> mp; 
    queue<int> q;

    while (m--)
    {
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    
    for (int i=1; i<n+1; i++) {
        if (!visited[i])
        {
            visited[i] = true;
            q.push(i);
            while (!q.empty())
            {
                x = q.front();
                if (!mp[x].empty()) {
                    for (int j : mp[x]) {
                        if (!visited[j]) q.push(j);
                        visited[j] = true;
                    }
                }
                q.pop();
            }
            count++;
        }
    }
    cout << count << endl;

    return 0;
}