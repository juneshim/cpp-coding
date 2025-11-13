#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    while (cin >> A >> B && (A != 0 && B != 0)) {
        cout << A+B << '\n';
    } 

    return 0;
}