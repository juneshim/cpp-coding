#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K, idx=0; cin >> N >> K;
    queue<int> q;
    int ans[5000];

    for (int i=1; i<N+1; i++) {
        q.push(i);
    }

    while (true)
    { 
        for (int i=0; i<K-1; i++) {
            int n = q.front();
            q.pop();
            q.push(n);
        }
        int n = q.front();
        q.pop();
        ans[idx++] = n;
        if (q.empty()) break;
    }

    cout << "<";
    for (int i = 0; i < N; i++) {
        cout << ans[i];
        if (i != N - 1) cout << ", ";
    }
    cout << ">" << endl;
    return 0;
}

/*
🔧 개선하면 좋은 점
1️⃣ while(true) 대신 조건 사용 (가독성)

현재 코드

while (true)

→ 보통은 이렇게 씁니다

while (!q.empty())

그래야 의도가 바로 보입니다.

개선:

while (!q.empty()) {
    for (int i=0; i<K-1; i++) {
        int n = q.front();
        q.pop();
        q.push(n);
    }

    int n = q.front();
    q.pop();
    ans[idx++] = n;
}

그리고

if (q.empty()) break;

도 필요 없어집니다.

2️⃣ n 변수 줄이기

지금 코드

int n = q.front();
q.pop();
q.push(n);

사실 이렇게 줄일 수 있습니다.

q.push(q.front());
q.pop();

더 간결합니다.
*/