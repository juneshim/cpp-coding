#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, year; cin >> n;
    string s;
    while (n--)
    {
        cin >> s >> year;
        if (year == 2026) {
            cout << s << endl;
            break;
        }
    }
    
    return 0;
}