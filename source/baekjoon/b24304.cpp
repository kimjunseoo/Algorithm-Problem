#include <bits/stdc++.h>

using namespace std;

int main(){

    int total;

    int count;
    int price, countOfgoods;
    int sum = 0;
    cin >> total;
    cin >> count;
    int arr[count];
    for(int i=0; i < count; i++){
        cin >> price >> countOfgoods;

        arr[i] = price * countOfgoods;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        sum += arr[i];
    }

    if(total == sum){
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
    return 0;
}