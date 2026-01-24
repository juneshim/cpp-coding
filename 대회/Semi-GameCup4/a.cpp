#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_possible(int n, vector<pair<int, int>> ranges, int skip_idx) {
    int curr_l, curr_r;
    if (skip_idx == 0) {
        curr_l = 0; 
        curr_r = 1000;
    } else {
        curr_l = ranges[0].first;
        curr_r = ranges[0].second;
    }
    for (int i = 1; i < n; ++i) {
        curr_l -= 1;
        curr_r += 1;
        if (i != skip_idx) {
            curr_l = max(curr_l, ranges[i].first);
            curr_r = min(curr_r, ranges[i].second);
        }
        if (curr_l > curr_r) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> ranges(n);
    for (int i = 0; i < n; ++i) {
        cin >> ranges[i].first >> ranges[i].second;
    }
    if (is_possible(n, ranges, -1)) {
        cout << "World Champion" << endl;
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        if (is_possible(n, ranges, i)) {
            cout << "World Champion" << endl;
            return 0;
        }
    }

    cout << "Surrender" << endl;
    return 0;
}