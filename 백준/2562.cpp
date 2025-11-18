#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr(9);

    for (int i = 0; i < 9; i++)
        cin >> arr[i];

    auto it = max_element(arr.begin(), arr.end());

    cout << *it << '\n';
    cout << distance(arr.begin(), it)+1 << endl;

    return 0;
}
