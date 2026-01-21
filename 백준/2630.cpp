#include <iostream>
#include <string>

using namespace std;

int N;
int paper[128][128];
int white = 0, blue = 0;

void solve(int x, int y, int size) {
    int color = paper[x][y];

    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (paper[i][j] != color) {
                int half = size / 2;
                solve(x, y, half);   
                solve(x, y + half, half);     
                solve(x + half, y, half);       
                solve(x + half, y + half, half);  
                return;
            }
        }
    }

    if (color == 0) white++;
    else blue++;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> paper[i][j];
        }
    }

    solve(0, 0, N);

    cout << white << '\n' << blue << '\n';
    return 0;
}