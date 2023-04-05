#include <bits/stdc++.h>

using namespace std;
int a;
string ptn, startPtn, endPtn;
string name;
int starPosition;
int main(){

    cin >> a;
    cin >> ptn;

    starPosition = ptn.find("*");
    
    startPtn = ptn.substr(0, starPosition); //prefix
    endPtn = ptn.substr(starPosition + 1); //suffix


    for (int i = 0; i < a; i++)
    {
        cin >> name;
        if(name.size() < startPtn.size() + endPtn.size()){
            cout << "NE" << '\n';
        } else if(name.substr(0, startPtn.size()) == startPtn && name.substr(name.size() - endPtn.size()) == endPtn){
            cout << "DA" << '\n';
        } else {
            cout << "NE" << '\n';
        }
    }
    

    return 0;
}