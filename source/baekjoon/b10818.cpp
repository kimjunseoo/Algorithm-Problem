#include <bits/stdc++.h>

using namespace std;

int main(){
    int count;
    int max = INT_MIN;
    int min = INT_MAX;
    cin >> count;

    int num[count];

    for (int i = 0; i < count; i++)
    {
        cin >> num[i];
    }

    for (int i : num)
    {
        if( i > max ){
            max = i;
        }
        if( i < min){
            min = i;
        }
    }
    cout << min << " " << max << '\n';

    return 0;
}