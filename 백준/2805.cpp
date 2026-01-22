#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N, M, H, sum, num, max=0;
    cin >> N >> M;

    long long arr[N];
    for (int i=0; i<N; i++)
    {
        cin >> num;
        arr[i] = num;
        if (max < num) max = num;
    }

    long long left = 0, answer = 0, mid;
    long long right = max;

    while (left <= right)
    {
        mid = (left + right) / 2;
        sum = 0;
        
        for (int h : arr) {
            if (h > mid) {
                sum += (h - mid);
            }
        }

        if (sum >= M) {
            answer = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    cout << answer << "\n";

    return 0;
}