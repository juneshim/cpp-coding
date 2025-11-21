#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, asw; cin >> n;
    asw = (n/5);
    asw += (n/25);
    asw += (n/125);
    cout << asw << endl;
    return 0;
}