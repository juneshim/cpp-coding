#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cout << "The largest square has side length " << int(sqrt(n)) << "." << endl;

    return 0;
}