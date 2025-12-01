#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n;
    vector<int> scores;
    scores.reserve(n);
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    for (int i=0; i<n; i++) {
        cin >> m;
        scores.push_back(m);
    }
    sort(scores.begin(), scores.end());
    float sum = 0;
    int sub = (int)round(n*0.15);
    for (int i=sub; i<n-sub; i++) {
        sum += scores[i];
    }
    cout << round(sum/(n-2*sub)) << endl;

    return 0;
}