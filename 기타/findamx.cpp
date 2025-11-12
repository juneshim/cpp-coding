#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N; cin >> N;
    vector<int> arr(N);
    for (int i=0; i<N; i++) 
        cin >> arr[i];
    auto max_it = max_element(arr.begin(), arr.end());
    int index = distance(arr.begin(), max_it);
    cout << *max_it << " " << index << endl;
    return 0;
}