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
    for (int n : A) {
        if (n != A[0]) cout << ' ';
        cout << n;
    }
    return 0;
}