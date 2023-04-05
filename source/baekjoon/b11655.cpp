#include <bits/stdc++.h>

using namespace std;
string str;

int main(){

    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {   
        if((int)str[i] >= 78 && (int)str[i] <= 90){
            str[i] -= 13;
        } else if((int)str[i] >= 65 && (int)str[i] <= 90){
            str[i] += 13;
        } else if((int)str[i] >= 110 && (int)str[i] <= 122 ){
            str[i] -= 13;
        } else if((int)str[i] >= 97){
            str[i] += 13;
        }
    }
    

    cout << str << '\n';

    return 0;
}