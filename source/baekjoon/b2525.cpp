#include <bits/stdc++.h>

using namespace std;

int main(){

    int A, B, C, D;
    cin >> A >> B;
    cin >> C;

    B += C;

    if(B >= 60){
        D = B / 60;
        A += D;
        B -= 60 * D;
        if(A > 23){
            A -= 24;
        }
    }
    cout << A << " " << B << endl;
    return 0;
}