#include <iostream>
#include <string>
#include <vector>

using namespace std;
int func(int i, int n, vector<pair<int,int>> arr) {
    int count = 0;
    for (int j=0; j<n; j++){
        if(arr[i].first < arr[j].first && arr[i].second < arr[j].second) count++;
    }
    return count+1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y; cin >> n;
    vector<pair<int,int>> arr(n);
    vector<int> ans;
    for (int i=0; i<n; i++) {
        cin >> x >> y;
        arr[i].first = x;
        arr[i].second = y;
    }
    for (int i=0; i<n; i++) {
        ans.push_back(func(i, n, arr));
    }
    for (int i : ans) cout << i << " ";
    return 0;
}