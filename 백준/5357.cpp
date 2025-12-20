#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string line; 
    queue<char> q;
    cin >> n;
    while (n--)
    {
        cin >> line;
        q.push(line[0]);
        for (char c : line) {
            if (q.back()!=c) {
                q.push(c);                
            }
        }
        while (!q.empty()) {
            cout << q.front();
            q.pop();
        }
        cout << '\n';
    }
    
    return 0;
}