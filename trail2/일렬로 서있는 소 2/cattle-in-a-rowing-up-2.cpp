#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n ;

    vector<int> height(n);
    for(int i=0; i<n; i++){
        cin >> height[i];
    }
    long long total_triplets =0;

    for(int j=1; j<n-1; j++){
        long long left_cnt=0;
        long long right_cnt=0;

        for(int i=0; i<j; i++){
        if(height[i] <= height[j])
            left_cnt++;
        }

        for(int k=j+1; k<n; k++){
        if(height[j] <= height[k])
            right_cnt++;
        }

        total_triplets += (left_cnt * right_cnt);

    }

    cout << total_triplets << "\n";

    return 0;
}