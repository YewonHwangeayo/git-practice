#include <iostream>
using namespace std;


int main() {
    // Please write your code here.
    string A;
    cin >> A;

    int cnt =0;
    int sum_pair=0;

    for(int i=0; i<A.length(); i++){
        if(A[i]== '('){
                cnt += 1;
            }
        else if(A[i]==')'){
                sum_pair +=cnt;

        }
    }
    cout << sum_pair;
    

    return 0;
}