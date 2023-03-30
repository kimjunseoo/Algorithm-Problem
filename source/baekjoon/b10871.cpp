#include <bits/stdc++.h>

using namespace std;

int main(){

    int size, num;
    int elem;
    cin >> size >> num;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> elem;
        arr[i] = elem;
    }
    
    for (int i = 0; i < size; i++)
    {
        if(arr[i] < num){
            cout << arr[i] << " ";
        }
    }
    cout << '\n';

    return 0;
}