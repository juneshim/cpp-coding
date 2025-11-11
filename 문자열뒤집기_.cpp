#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s; cin >> s;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}