#include <iostream>
#include <string>

using namespace std;

int least, n;

void findf(int k, int sum, int count) {
    if (count >= least) return;
    if (sum == n) {
        if (count < least) least = count;
        return;
    }
    for (int i=k; i>0; i--) {
        if (sum + i*i <= n) {
            sum += i*i;
            count++;
            findf(i, sum, count);
            sum -= i*i;
            count--;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    least = 10;
    findf(224, 0, 0);
    cout << least << endl;

    return 0;
}