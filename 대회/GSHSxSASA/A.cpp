#include <iostream>
#include <string>

using namespace std;
bool is_min_mf(long long x, long long y, long long x_0, long long y_0, long long min_mf) {
    //점과 점 사이의 거리를 보고 가장 가까운 점이면 true
    if (min_mf > (x-x_0)*(x-x_0) + (y-y_0)*(y-y_0)) {
        return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x=0, y=0, x_0, y_0, min_mf;
    int idx, go_x=1, go_y=0, q=1; 
    cin >> x_0 >> y_0;
    string s; cin >> s;
    int ans[2] = {0,0};
    bool is_ans = true;
    
    min_mf = x_0*x_0 + y_0*y_0;
    idx = 0;
    while (idx < s.length()) {
        char cmd = s[idx++];
        int n = 0;
        while (idx < s.length() && isdigit(s[idx])) {
            n = n * 10 + (s[idx] - '0');
            idx++;
        }

        if (cmd == 'S') {
            for (int i=0; i<n; i++) {
                x += go_x;
                y += go_y;
                if (x == x_0 && y == y_0) {
                    cout << -1;
                    return 0;
                }
                if (is_min_mf(x, y, x_0, y_0, min_mf)) {
                    min_mf = (x-x_0)*(x-x_0) + (y-y_0)*(y-y_0);
                    ans[0] = x, ans[1] = y;
                }
            }
        }
        else {
            q += n; 
            q = (q-1)%4 + 1;
            if (q == 1) {
                go_x = 1;
                go_y = 0; 
            }
            else if (q == 2)
            {
                go_x = 0;
                go_y = 1;
            }
            else if (q == 3) {
                go_x = -1;
                go_y = 0;
            }
            else {
                go_x = 0;
                go_y = -1;
            }
        }
    }

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}