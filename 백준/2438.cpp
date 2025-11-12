#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N; cin >> N;
    for (int i=1; i<N+1; i++) {
        string s;
        for (int j=0; j<i; j++) 
            s.push_back('*');
        cout << s << endl;
    }
    return 0;
}