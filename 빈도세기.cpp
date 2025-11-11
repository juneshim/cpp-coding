#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int N; cin >> N;
    map<string, int> word_count;
    for (int i = 0; i < N; i++) {
        string word; cin >> word;
        word_count[word]++;
    }
    for (auto &pair : word_count) {
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}