 #include <iostream>
#include <string>

using namespace std;

int n, m;
string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    cin >> s;

    int ans = 0;
    int cnt = 0;

    for (int i = 1; i < m - 1; i++) {
        if (s[i - 1] == 'I' && s[i] == 'O' && s[i + 1] == 'I') {
            cnt++;
            if (cnt >= n) ans++;
            i++;
        } else {
            cnt = 0;
        }
    }

    cout << ans << '\n';
    return 0;
}