#include <bits/stdc++.h>

using namespace std;
string s;
bool isPel;
int main(){

    while (true)
    {
        cin >> s;

        if(s == "0"){
            return 0;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == s[s.size() -1 - i]){
                isPel = true;
            } else {
                isPel = false;
                break;
            }
        } 
        
        if(isPel){
            cout << "yes" << '\n';
        }else if(isPel == false){
            cout << "no" << '\n';
        }
    }
    
    return 0;
}