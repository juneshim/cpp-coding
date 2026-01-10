#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, i, idx=1; cin >> n;
    int ans[2];
    unordered_map<int, int> um;
    m = 3*n;
    um.insert({1,0});
    um.insert({2,0});
    um.insert({3,0});
    while (m--)
    {   
        cin >> i;
        if (!um.count(i)) {
            um[i] += 1;
        } else {
            um[i] += 1;
            if (um[i]>n) {
                ans[0] = idx;
                ans[1] = i;
            }
        }
        idx++;
    }
    for (auto& it : um) {
        if (it.first != ans[1] && it.second != n) {
            cout << it.first << '\n';
            cout << ans[1] << '\n';
            break;
        }
    }
    
    return 0;
}