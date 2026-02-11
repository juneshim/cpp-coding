#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string s;
        getline(cin, s);

        bool isPalindrome = true;

        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (tolower(s[left]) != tolower(s[right])) {
                isPalindrome = false;
                break;
            }
            left++;
            right--;
        }

        if (isPalindrome)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}