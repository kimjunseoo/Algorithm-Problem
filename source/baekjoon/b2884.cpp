#include <bits/stdc++.h>

using namespace std;
//고려해야할게 0
int main(){
    int H, M;
    cin >> H >> M;
    
    M -= 45;
    if(M < 0){
        M += 60;
        H -= 1;

        if(H < 0){
            H = 23;
        }
    }
    cout << H << " " << M << endl;
}
