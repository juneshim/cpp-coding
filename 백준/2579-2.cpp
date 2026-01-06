#include <iostream>
#include <string>

using namespace std;

int n;
int arr[301];
int dp[301][3];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    dp[1][1] = arr[1];
    dp[1][2] = 0;

    for (int i = 2; i <= n; i++) {
        dp[i][1] = max(dp[i-2][1], dp[i-2][2]) + arr[i];
        dp[i][2] = dp[i-1][1] + arr[i];
    }

    cout << max(dp[n][1], dp[n][2]) << '\n';
}