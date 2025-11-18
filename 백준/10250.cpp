#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    for (int i=0; i<T; i++) {
        int H, W, N, room=0;
        cin >> H >> W >> N;
        while(N>H) {
            N -= H;
            room += 1;
        }
        cout << 101 + room + 100*(N-1) << '\n';
    }

    return 0;
}