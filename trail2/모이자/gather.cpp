#include <iostream>
#include <climits>

using namespace std;

int n;
int A[100];

int main() {
    int min_sum=INT_MAX;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int diff = 0;
    
    for(int j=0; j<n; j++){
        int sum_distance =0;
        for(int i=0; i<n; i++){
            sum_distance += A[i]* abs(i-j);
        }
          min_sum = min(min_sum, sum_distance);
    }
    cout << min_sum;

    return 0;
}