#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> A(N), B;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        B.push_back(A[i]);
    }

    sort(B.begin(), B.end());
    B.erase(unique(B.begin(), B.end()), B.end());

    for (int i = 0; i < N; i++) {
        int idx = lower_bound(B.begin(), B.end(), A[i]) - B.begin();
        cout << idx << " ";
    }
}