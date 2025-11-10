#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    int N; cin >> N;
    vector<int> arr(N);
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    cout << accumulate(arr.begin(), arr.end(), 0) << endl;
    return 0;
}