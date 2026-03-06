#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;

    vector<string> v;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end());

    int cnt = 0;

    for (int i = 0; i < n - 1; i++) {
        if (v[i+1].substr(0, v[i].size()) != v[i]) {
            cnt++;
        }
    }

    cnt++;

    cout << cnt << endl;

    return 0;
}