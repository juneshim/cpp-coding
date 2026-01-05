#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n; cin >> t;
    int zero[41], one[41];
    while (t--) {
        zero[0] = 1; zero[1] = 0;
        one[0] = 0; one[1] = 1;
        cin >> n;
        for (int i=2; i <=n; i++) {
            zero[i] = zero[i-1] + zero[i-2];
            one[i] = one[i-1] + one[i-2];
        }
        cout << zero[n] << ' ' << one[n] << '\n';
    }

    return 0;
}