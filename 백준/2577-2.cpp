#include <iostream>
#include <string>
#include <vector>

using namespace std;

//입력 받은 숫자를 문자열로 바꿔 취급하는 코드
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c; cin >> a >> b >> c;
    vector<int> count(10);
    int n = a*b*c;
    string s = to_string(n);
    for (char c : s) {
        count[c-'0']++;
    }
    for (int i : count) {
        cout << i << '\n';
    }
    
    return 0;
}
