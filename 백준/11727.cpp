#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int dq[1001];
    dq[1] = 1;
    dq[2] = 3;
    for (int i=3; i<1001; i++) {
        dq[i] = (dq[i-1] + dq[i-2]*2) % 10007;
    }
    int n; cin >> n;
    cout << dq[n] << endl;

    return 0;
}