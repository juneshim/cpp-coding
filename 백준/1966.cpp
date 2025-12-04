#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    vector<int> vec, vec2;
    vector<bool> checkout;
    for (int i=0; i<N; i++) {
        int n,m,temp,idx, ans; cin >> n >> m;
        int check[9] = {0}; 
        vec.reserve(n);
        checkout.resize(n,false);
        for (int j=0; j<n; j++) {
            cin >> temp;
            vec.push_back(temp);
            if (check[temp-1] == 0) {
                check[temp-1] = 1;
            }
        }
        vec2 = vec;
        sort(vec2.begin(), vec2.end(),  greater<int>());
        idx = 0;
        ans = 0;
        for (int j : vec2) {
            for (int k=0; k<n; k++) {
                if (vec[idx]==j && checkout[idx]==false) {
                    checkout[idx] = true;
                    ans++;
                    if (idx == m) {
                        cout << ans << '\n';
                        break;
                    }
                    idx++;
                    if (idx >= n) idx = 0;
                    break;
                }
                idx++;
                if (idx >= n) idx = 0;
            }
        }
        vec.clear();
        vec2.clear();
        checkout.clear();
    }

    return 0;
}