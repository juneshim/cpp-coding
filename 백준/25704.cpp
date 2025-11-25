#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    float amount; cin >> amount;
    vector<int> arr;

    if (n>=20) {
        arr.push_back(amount * 0.75);
        arr.push_back(amount - 2000);
        arr.push_back(amount * 0.9);
        arr.push_back(amount - 500);
    }
    else if (n>=15) {
        arr.push_back(amount - 2000);
        arr.push_back(amount * 0.9);
        arr.push_back(amount - 500);
    }
    else if (n>=10) {
        arr.push_back(amount * 0.9);
        arr.push_back(amount - 500);
    }
    else if (n>=5) {
        arr.push_back(amount - 500);
    } else arr.push_back(amount);
    amount = *min_element(arr.begin(), arr.end());
    
    if (amount<0) cout << 0 << endl;
    else cout << amount << endl;
    

    return 0;
}