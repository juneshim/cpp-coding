#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<string, int>> arr;

    for (int i = 0; i < N; i++) {
        string name;
        int score;
        cin >> name >> score;
        if (score >= 60)
            arr.push_back({name, score});
    }

    sort(arr.begin(), arr.end(),
        [](const pair<string,int>& a, const pair<string,int>& b) {
            return a.second > b.second;
        });

    for (auto &p : arr)
        cout << p.first << " " << p.second << endl;

    return 0;
}
