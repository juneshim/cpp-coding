#include <iostream>
#include <deque>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, x;
    cin >> N;

    deque<int> dq;
    unordered_map<int, int> freq;

    int mx = 0;

    for (int i = 0; i < N; i++) {
        cin >> x;
        dq.push_back(x);
        freq[x]++;

        while (freq.size() > 2) {
            int f = dq.front();
            dq.pop_front();
            freq[f]--;
            if (freq[f] == 0)
                freq.erase(f);
        }

        mx = max(mx, (int)dq.size());
    }

    cout << mx << endl;
    return 0;
}