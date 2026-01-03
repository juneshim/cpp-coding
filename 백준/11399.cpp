#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ans=0, app=0; cin >> n;
    vector<int> v;

    while (n--)
    {
        cin >> m;
        v.push_back(m);
    }
    sort(v.begin(), v.end());
    for (int i : v) {
        app += i;
        ans += app;
    }
    cout << ans << endl;

    return 0;
}