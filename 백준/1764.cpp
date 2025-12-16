#include <iostream>
#include <string>
#include <unordered_set>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> n >> m;
    string s;
    unordered_set<string> us;
    set<string> as;
    
    while(n--) {
        cin >> s;
        us.insert(s);
    }
    while (m--)
    {
        cin >> s;
        if (us.count(s)) {
            as.insert(s);
        }
    }
    cout << as.size() << '\n';
    for (auto& str : as) {
        cout << str << '\n';
    }
    return 0;
}