#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, num, idx, count; cin >> n >> k;
    int arr[n];
    set<int> ans_s;
    for (int i=0; i<n; i++) {
        cin >> num;
        arr[i] = num;
    }
    idx = n-1;
    count = 0;
    while (k>0) {
        if (arr[idx]>k) {
            idx--;
            continue;
        }
        k -= arr[idx];
        count++;
    }
    cout << count << endl;

    return 0;
}