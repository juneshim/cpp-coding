#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    multiset<int> ms;
    cin >> n;

    while (n--)
    {
        cin >> x;
        if (x) {
            // 저장
            ms.insert(x);
        } else {
            //최솟값 출력 및 제거. 없으면 0
            if (ms.size()) {
                auto it = ms.begin();
                cout << *it << '\n';
                ms.erase(it);
            } else cout << 0 << '\n';
        }
    }
    
    return 0;
}