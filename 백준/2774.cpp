#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin >> n;
    for (int i=0; i<n; i++) {
        vector<int> arr(10);
        int count = 0;
        cin >> x;
        while (x>0)
        {
            arr[x%10]++;
            x /= 10;
        }
        for (int j=0; j<10; j++) {
            if (arr[j]>0) count++;
        }
        cout << count << '\n';
    }

    return 0;
}