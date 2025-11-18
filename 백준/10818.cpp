#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n);

    for (int i=0; i<n; i++) cin >> arr[i];

    auto it = max_element(arr.begin(), arr.end());
    auto it2 = min_element(arr.begin(), arr.end());

    cout << *it2 << " " << *it << endl;

    return 0;
}