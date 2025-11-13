#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for (int i=0; i<n; i++) {
        cout << string(n-(i+1), ' ') << string(i+1, '*') << '\n';
    }

    return 0;
}