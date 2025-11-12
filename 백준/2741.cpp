#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    for (int i=1; i<N+1; i++)
        cout << i << "\n";

    return 0;
}