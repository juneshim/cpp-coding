#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int sum=0;
    int star;
    for (int i=0; i<12; i++) {
        if (s[i] == '*') {star = i%2 == 0 ? 1 : 3; continue;}
        sum = (sum + (s[i]-'0')*(i%2 == 0 ? 1 : 3))%10;
    }
    for (int i=0; i<10; i++) {
        if (((sum + star*i)%10 + (s[12]-'0'))%10 == 0) cout << i << endl;
    }
    return 0;
}