#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int i=0, j=1, k=5;
    while(n>0) {
        if (i==0) {
            n -= 1;
        } else
        n -= i*6;
        i++;
    } // 1,7,19,37, 61
    cout << i << endl;
    return 0;
}