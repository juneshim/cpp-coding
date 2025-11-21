#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;
    string s ;
    while(cin >> s) {
        if(n) n++;
        if (s[0] - '0' < 10 && s[0] - '0' >= 0)  n = stoi(s);
    }
    n++;
    if (n == 1) {
        if (s == "Fizz") cout << 4 << endl;
        else if (s == "Buzz") cout << 6 << endl;
        return 0;
    }
    switch (n % 15) {
    case 0:
        cout << "FizzBuzz" << endl;
        break;
    case 3:
    case 6:
    case 9:
    case 12:
        cout << "Fizz" << endl;
        break;
    case 5:
    case 10:
        cout << "Buzz" << endl;
        break;
    default:
        cout << n << endl;
        break;
}
    return 0;
}