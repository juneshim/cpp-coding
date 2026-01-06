#include <iostream>
#include <string>

using namespace std;

int best=0, n;
int arr[300];

void stairs(int idx, int count, int save) {
    if (count >= 3) return;
    if (idx >= n) return;
    save += arr[idx];
    // cout << save << '\n';
    if (idx == n-1) {
        if (save > best) {
            best = save;
            return;
        }
    }
    stairs(idx+1, count+1, save);
    stairs(idx+2, 1, save);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    int j;
    for (int i=0; i<n; i++) {
        cin >> j;
        arr[i] =j;
    }
    int idx=0, count=1, save=0;
    stairs(idx, count, save);
    stairs(idx+1, count, save);
    cout << best << endl;
    return 0;
}

//반례는 없으니 시간 초과 난다...( • ̫ •̥ )