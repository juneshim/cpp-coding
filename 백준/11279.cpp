#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin >> n;
    multiset<int> ms;

    while (n--)
    {
        cin >> x;
        if (x) ms.insert(x);
        else {
            if (!ms.empty()) {
                auto it = ms.end();
                it--;
                cout << *it << '\n';
                ms.erase(it);
            } else cout << 0 << '\n';
        }
    }

    return 0;
}