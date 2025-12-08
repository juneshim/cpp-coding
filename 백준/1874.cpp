#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l, temp; cin >> n;
    int idx = 1;
    bool have_ans = true;
    queue<int> q, make;
    queue<string> ans;
    stack<int> st;
    string s;
    while (n--) {
        cin >> l;
        make.push(l);
        q.push(idx++);
    }
    while(true) {
        if (q.empty() && st.empty()) break;
        if (q.empty() && (st.top() != make.front())) {
            cout << "NO" << '\n';
            have_ans = false;
            break;
        }
        if (!q.empty() && q.front() == make.front()) {
            q.pop();
            make.pop();
            ans.push("+");
            ans.push("-");
        } else if (!st.empty() && st.top() == make.front()) {
            ans.push("-");
            st.pop();
            make.pop();
        }
        else {
            ans.push("+");
            temp = q.front();
            q.pop();
            st.push(temp);
        }
    }
    if (have_ans) {
        while (!ans.empty())
        {
            s = ans.front();
            ans.pop();
            cout << s << '\n';
        }
    }

    return 0;
}