#include <bits/stdc++.h>

using namespace std;
string str;

int main(){

    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {   
        if(isalpha(str[i]) == 2 && (int)str[i] >= 78){
            str[i] -= 13;
        } else if(isalpha(str[i]) == 2){
            str[i] += 13;
        } else if(isalpha(str[i]) == 1 && (int)str[i] >= 110){
            str[i] -= 13;
        } else if(isalpha(str[i]) == 1){
            str[i] += 13;
        }
    }
    

    cout << str << '\n';

    return 0;
}