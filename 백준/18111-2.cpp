#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, b;
    cin >> n >> m >> b;

    vector<int> v(n * m);
    int mn = 256, mx = 0;

    for (int i = 0; i < n * m; i++) {
        cin >> v[i];
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }

    int bestTime = 1e9;
    int bestHeight = 0;

    for (int h = mn; h <= mx; h++) {
        int fill = 0, emp = 0;

        for (int i = 0; i < n * m; i++) {
            int diff = v[i] - h;
            if (diff >= 0) emp += diff;
            else fill -= diff;
        }

        if (fill > b + emp) continue;

        int curTime = emp * 2 + fill;

        if (curTime < bestTime ||
           (curTime == bestTime && h > bestHeight)) {
            bestTime = curTime;
            bestHeight = h;
        }
    }

    cout << bestTime << ' ' << bestHeight << '\n';
    return 0;
}