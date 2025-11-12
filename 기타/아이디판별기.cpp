#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isValid(const string& s) {
    // 길이가 6이 아닌 경우
    if (s.size() != 6) return false;

    // 첫 3글자: 대문자 알파벳
    for (int i = 0; i < 3; ++i) {
        if (s[i] < 'A' || s[i] > 'Z') return false;
    }

    // 뒤 3글자: 숫자
    for (int i = 3; i < 6; ++i) {
        if (s[i] < '0' || s[i] > '9') return false;
    }

    return true;
}

int countValidCodes(const vector<string>& codes) {
    int count = 0;
    for (const string& code : codes) {
        if (isValid(code)) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<string> inputs = {"ASD123", "LKH456", "KH1", "ABX999", "ZZZ12A"};
    cout << "조건을 만족하는 코드 개수: " << countValidCodes(inputs) << endl;
    return 0;
}
