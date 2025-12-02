#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> m >> n;
    vector<int> vec;
    vec.resize(n+1, 1);
    for (long long i=2; i<n+1; i++) {
        if (vec[i] == 1 && i>=m) {
            cout << i << '\n';
        } 
        for (long long j=i*i; j<n+1; j+=i) vec[j] = 0;
    }

    return 0;
}