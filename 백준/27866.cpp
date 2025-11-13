#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int i;
    string s; cin >> s >> i;
    cout << s[i-1] << endl;

    return 0;
}