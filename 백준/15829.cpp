#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l; cin >> l;
    string s; cin >> s;
    long long sum = 0;
    long long pow31 = 1;
    const long long MOD = 1234567891LL;
    for (int i=0; i<l; i++) {
        int n = s[i] - 'a' + 1;
        long long temp = 1;
        sum = (sum + (n*pow31)%MOD)%MOD;
        pow31 = (pow31*31)%MOD;
    }
    cout << sum << endl;

    return 0;
}