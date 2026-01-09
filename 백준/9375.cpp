#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T, n; cin >> T;
    while (T--)
    {
        cin >> n;
        int ans=1;
        string s, w;
        unordered_map<string, int> um;
        while (n--)
        {
            cin >> s >> w;
            if (um.count(w)) {
                um[w]++;
            } else um.insert({w,1});
        }
        for (auto& i : um) {
            ans *= (i.second+1);
        }
        cout << ans-1 << '\n';
    }
    
    return 0;
}