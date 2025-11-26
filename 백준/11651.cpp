#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<pair<int, int>> v;
    v.reserve(n);

    for (int i=0; i<n; i++) {
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
        if (a.second != b.second) return a.second < b.second;
        return a.first < b.first;
    }); 
    for (const auto& p : v) {
        cout << p.first << ' ' << p.second << '\n';
    }
    return 0;
}