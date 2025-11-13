#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    cout << a + b - c << '\n';

    int temp = b;
    int factor = 1;
    while (temp > 0) {
        factor *= 10;
        temp /= 10;
    }

    cout << a * factor + b - c << '\n';

    return 0;
}
