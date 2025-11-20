#include <iostream>
#include <string>

using namespace std;

int func(int k, int n) {
    if (k==0) {
        return n;
    }
    int ans=0;
    for (int i=1; i<=n; i++) {
        ans += func(k-1, i);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    for (int i=0; i<t; i++) {
        int k, n; cin >> k >> n;
        cout << func(k, n) << '\n'; 
    }

    return 0;
}