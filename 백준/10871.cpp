#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, X;
    cin >> N >> X;
    vector<int> A;
    for (int i=0; i<N; i++) {
        int n; cin >> n;
        if (n < X) {
            A.push_back(n);
        }
    }
    bool first = true;
    for (int n : A) {
        if (!first) cout << ' ';
        cout << n;
        first = false;
    }

    return 0;
}