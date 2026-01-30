#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans;
    char shape;
    string s;

    cin >> s;
    if (s[0] == '(') shape = '(';
    else shape = ')';
    ans = 5;

    for (char c : s) {
        if (c == shape) ans += 5;
        else {
            ans += 10;
            shape = c;
        }
    }
    cout << ans << endl;
    
    return 0;
}