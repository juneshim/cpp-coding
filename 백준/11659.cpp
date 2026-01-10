#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, i, j, ans, idx=0; cin >> n >> m;
    int arr[n], presum[n+1];
    presum[0] = 0;
    while (n--)
    {
        cin >> i;
        arr[idx] = i;
        presum[idx+1] = presum[idx] + i;
        idx++;
    }
    while (m--)
    {   
        cin >> i >> j;
        ans = presum[j] - presum[i-1];
        cout << ans << '\n';
    }
    return 0;
}