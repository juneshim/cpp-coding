#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n; 
    long long a,b;
    bool isPass = true;
    cin >> a;
    n--;
    while (n--)
    {
        cin >> b;
        if (!(a<b)) {
            isPass = false;
            break;
        }
        a = b;
    }
    if (isPass) cout << 1 << endl;
    else cout << 0 << endl;
    
    return 0;
}