#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin >> a >> b >> c;
    cout << a+b-c << '\n';
    if (b == 1000) cout << a*10000 + b - c << '\n';
    else if (b >= 100) {
        cout << a*1000 + b - c << '\n';
    }
    else if (b >= 10)
    {
        cout << a*100 + b - c << '\n';
    } else cout << a*10 + b - c << '\n';
    

    return 0;
}