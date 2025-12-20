#include <iostream>
#include <string>
#include <set>

using namespace std;
int count_coinf(const int *arr, int n, int k) {
    int least_n = 10000000, count = 10000000, idx = 0;
    bool is_amount = false;
    if (idx > n) {return least_n;}
    if (arr[n-idx] > k) {
        idx++;
        
    }
    if (is_amount && least_n > count) {
        least_n = count;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, num; cin >> n >> k;
    int arr[n];
    set<int> ans_s;
    for (int i=0; i<n; i++) {
        cin >> num;
        arr[i] = num;
    }
    // for (int i=0; i<n; i++) {
    //     ans_s.insert(cout_coinf(arr, i, k));
    // }
    // cout << ans_s[0] << endl;

    return 0;
}