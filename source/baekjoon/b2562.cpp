#include <bits/stdc++.h>

using namespace std;


int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int num;
    int max = 0;
    int arr[9];
    int count;
    for (int i = 0; i < 9; i++)
    {
        cin >> num;

        arr[i] = num;
        if(num > max){
            max = num;
            count = i + 1;
        }
    }

    cout << max << '\n' << count << '\n';


    return 0;
}