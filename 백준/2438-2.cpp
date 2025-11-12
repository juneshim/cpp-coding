#include <iostream>
#include <string>

using namespace std;

int main() {
    //빠른 입출력
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    for (int i=1; i<N+1; i++) {
        //push_back('*') 대신 std::string 생성자 사용
        cout << string(i, '*') << '\n'; //endl 대신 '\n' 사용
    }
    return 0;
}
