#include <iostream>
#include <string>

using namespace std;

int arr[2501];
int n, m;

void func(int idx) {
    arr[idx] = 0;
    //오른쪽 
    if ((idx+1)%m!=0 && arr[idx+1]) func(idx+1);
    //왼쪽
    if (idx%m!=0 && arr[idx-1]) func(idx-1);
    //위
    if (idx-m>=0 && arr[idx-m]) func(idx-m);
    //아래
    if (idx+m<n*m && arr[idx+m]) func(idx+m);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T, k, a, b, count, idx; 
    cin >> T;
    while (T--)
    {
        cin >> m >> n >> k;
        count = 0;
        idx = 0;
        for (int i=0; i<m*n; i++) arr[i] = 0;
        while (k--)
        {
            cin >> a >>  b;
            arr[m*b + a] = 1;
        }
        while (idx < n*m) {
            if (arr[idx]) {
                count++;
                func(idx);
            }
            idx++;
        }
        cout << count << '\n';
    }
    return 0;
}