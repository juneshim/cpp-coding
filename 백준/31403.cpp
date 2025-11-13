#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin >> a >> b >> c;
    cout << a+b-c << '\n';
    char n = 0;
    // cout << (a-n)+(b-n)-(c-n) << '\n';
    cout << int(a- '0') + int(b- '0') - int(c - '0') + int('0') << a << '\n';

    return 0;
}