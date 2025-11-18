#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> s;
    string temp;

    while (cin >> temp) {
        s.push_back(temp);
    }

    cout << s.size() << endl;  

    return 0;
}
