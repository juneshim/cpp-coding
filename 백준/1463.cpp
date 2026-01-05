#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int arr[1000001] = {0};
    for (int i=2; i<n+1; i++) {
        arr[i] = arr[i-1] + 1;
        if (i%2 == 0) arr[i] = min({arr[i], arr[i/2]+1});
        if (i%3 == 0) arr[i] = min({arr[i], arr[i/3]+1});
    }
    cout << arr[n] << endl;
    return 0;
}