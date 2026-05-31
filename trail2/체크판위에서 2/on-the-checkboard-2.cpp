#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int R, C;
    cin >> R >> C;

    // 공백이 포함된 문자 입력을 처리하기 위해 char 타입 격자 생성
    vector<vector<char>> grid(R, vector<char>(C));
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    char start_color = grid[0][0];
    char end_color = grid[R - 1][C - 1];
    int ans = 0;

    // 1. 첫 번째 경유지 (r1, c1) 선택
    for (int r1 = 1; r1 < R - 2; r1++) {
        for (int c1 = 1; c1 < C - 2; c1++) {
            // 시작점과 색이 달라야 함
            if (grid[r1][c1] == start_color) continue;

            // 2. 두 번째 경유지 (r2, c2) 선택
            for (int r2 = r1 + 1; r2 < R - 1; r2++) {
                for (int c2 = c1 + 1; c2 < C - 1; c2++) {
                    
                    // 첫 번째 경유지와 색이 다르고, 도착점과도 색이 달라야 함
                    if (grid[r2][c2] != grid[r1][c1] && grid[r2][c2] != end_color) {
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans << "\n";
    return 0;
}