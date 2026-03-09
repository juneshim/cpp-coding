#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int used[200001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> v(N);
    for (int &x : v) cin >> x;

    sort(v.begin(), v.end());

    for (int x : v) {
        int pos = x;

        while (pos <= N && used[pos]) pos += K;

        if (pos > N) {
            cout << 0;
            return 0;
        }

        used[pos] = 1;
    }

    cout << 1;
}