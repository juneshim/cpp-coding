#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    long long ans=1, sm;
    for (int i=0; i<=b-a; i++) {
        sm = 0;
        for (int j=1; j<=a+i; j++) {
            sm += j;
        }
        ans = (ans * sm) % 14579;
    }
    cout << ans << endl;

    return 0;
}