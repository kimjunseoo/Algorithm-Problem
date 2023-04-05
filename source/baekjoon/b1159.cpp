#include <bits/stdc++.h>

using namespace std;
int memberSize;
string memberName, ret;
int a[26];
int main(){

    cin >> memberSize;

    for (int i = 0; i < memberSize; i++)
    {
        cin >> memberName;

        a[(int)memberName[0] - 'a']++;   
    }
    
    for (int i = 0; i < 26; i++)
    {
       if(a[i] >= 5){
        ret += i + 'a';
       }
    }
    if(ret.size() >= 1){
        cout << ret << '\n';
    } else {
        cout << "PREDAJA" << '\n';
    }
    

    return 0;
}