#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 이분 탐색으로 구현은 올바르나, 이건 이분 탐색이 아닌 완전 탐색을 해야 한다... ㅠㅠ
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x, b, fill, emp, time=5000;
    int min=500, max=0, mid;
    vector<int> v;
    cin >> n >> m >> b;

    for (int i=0; i<n*m; i++) {
        cin >> x;
        v.push_back(x);
        if (x>max) max = x;
        if (x<min) min = x;
    }

    while (min <= max) {
        fill=0, emp=0;
        mid = (min + max)/2;
        for (int i=0; i<n*m; i++) {
            x = v[i] - mid;
            if (x>=0) emp += x;
            else fill += (-1)*x;
        }
        if (fill <= b+emp) {
            if (time >= fill + emp*2) {
                time = fill + emp*2;
                min = mid + 1;
            } else {
                max = mid-1;
            }
        } else {
            max = mid-1;
        }
    }
    cout << time << ' ' << max << endl; 

    return 0;
}