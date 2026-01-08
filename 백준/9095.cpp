#include <iostream>
#include <string>

using namespace std;

int dq(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 4;
    return dq(n-1) + dq(n-2) + dq(n-3);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T, n; cin >> T;
    while (T--)
    {
        int ans;
        cin >> n;
        ans = dq(n);
        cout << ans << '\n';
    }
    
    return 0;
}