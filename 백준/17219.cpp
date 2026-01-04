#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m, idx=0; cin >> n >> m;
    string url, pw, f;
    unordered_map<string, string> mp;
    while (n--)
    {
        cin >> url >> pw;
        mp[url] = pw;
    }
    while (m--)
    {
        cin >> f;
        if (mp.find(f) != mp.end()) {
            cout << mp[f] << '\n';
        }
    }

    return 0;
}