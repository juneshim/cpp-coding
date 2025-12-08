#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, l, temp; cin >> n;
    queue<int> q, qtemp;
    int arr[1000000];
    m = n;
    while (m--) {
        cin >> l;
        arr[m] = l;
        q.push(m+1);
    }
    while(n--) {
        if (q.back() == arr[n]) {
            q.pop();
            cout << "+" << '\n' << "-" << '\n';
        } else if (qtemp.back() == arr[n]) {
            cout << "-" << '\n';
        }
        else {
            temp = q.back();
            q.pop();
            qtemp.push(temp);
        }
    }

    return 0;
}