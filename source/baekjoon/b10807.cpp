#include <bits/stdc++.h>

using namespace std;

int main(){

    int size;
    int num;
    cin >> size;

    int arr[size - 1];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cin >> num;
    cout << count(arr, arr + size, num);
    cout << '\n';
    return 0;
}
