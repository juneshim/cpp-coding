#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long dq[101];
    
    dq[1] = 1;
    dq[2] = 1;
    dq[3] = 1;
    dq[4] = 2;
    dq[5] = 2;
    for (int i=6; i<101; i++) {
        dq[i] = dq[i-1] + dq[i-5];
    }
    int T, n; cin >> T;
    while (T--)
    {
        cin >> n;
        cout << dq[n] << '\n';
    }

    return 0;
}