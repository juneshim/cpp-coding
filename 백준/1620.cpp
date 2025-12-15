#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,n; cin >> m >> n;
    unordered_map<string, int> um;
    vector<string> p;
    for (int i=0; i<m ;i++) {
        string s; cin >> s;
        um[s] = i;
        p.push_back(s);
    }
    while (n--)
    {
        string s; cin >> s;
        if (s[0] - 'A' < 0) {
            cout << p[stoi(s)-1] << '\n';
        }
        else {
            cout << um[s]+1 << '\n';
        }
    }

    return 0;
}