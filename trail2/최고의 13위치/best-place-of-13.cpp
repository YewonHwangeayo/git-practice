#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    for(int k=0; k<n; k++){
        for(int l=0; l<n; l++){
            cin >> grid[k][l]; // arr 대신 grid로 변경
        }
    }


    int max_cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-2; j++){
            max_cnt = max(max_cnt, grid[i][j] + grid[i][j+1] + grid[i][j+2]);
        }
    }
    cout << max_cnt;


    return 0;
}