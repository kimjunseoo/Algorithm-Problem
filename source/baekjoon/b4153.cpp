#include <bits/stdc++.h>

using namespace std;
int a[3];
int maxNum = -1;
int main(){

    while (true)
{
    for (int i = 0; i < 3; i++)
        {
            cin >> a[i];

            if(a[i] > maxNum){
                maxNum = a[i];
            }
        }
        if(a[0] == 0 && a[1] == 0 && a[2] ==0){
            return 0;
        }
        if(pow(maxNum,2) == pow(a[0], 2) + pow(a[1],2)){
            cout << "right" << '\n';
        } else if(pow(maxNum,2) == pow(a[1], 2) + pow(a[2],2)){
            cout << "right" << '\n';
        } else if(pow(maxNum,2) == pow(a[0], 2) + pow(a[2],2)){
            cout << "right" << '\n';
        } else {
            cout << "wrong" << '\n';
        }

        maxNum = -1;

} 

    return 0;
}