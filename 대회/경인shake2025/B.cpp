#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float n, m, k, i=0;
    float ans = 1;
    cin >> n >> m >> k;
    while (k--)
    {
        ans *= (n-m-i)/(n-i);
        cout << 1 - ans << setprecision(10) << '\n';
        i++;
    }

    return 0;
}