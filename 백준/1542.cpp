#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, temp = "";
    vector<string> v;
    int a[1000] = {0};

    cin >> s;

    for (char c : s) {
        if (c == '-') {
            v.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }
    v.push_back(temp); 

    for (int i = 0; i < v.size(); i++) {
        int num = 0;
        for (char c : v[i]) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            } else { 
                a[i] += num;
                num = 0;
            }
        }
        a[i] += num;
    }

    int ans = a[0];
    for (int i = 1; i < v.size(); i++) {
        ans -= a[i];
    }

    cout << ans << '\n';
}