#include <bits/stdc++.h>

using namespace std;

int a,b,c;

int firstFunc(int x, int y, int z){
    // (A+B)%C

    int middle = x + y;
    int result = middle % z;

    return result;
}

int secFunc(int x, int y, int z){
    // ((A%C) + (B%C))%C
    int middle = x%z;
    int middle2 = y%z;
    int middle3 = middle + middle2;
    int result = middle3 % z;

    return result; 
}

int thrdFunc(int x, int y, int z){
    // (A×B)%C
    int middle = x * y;
    int result = middle % z;
    return result;
}

int fourthFunc(int x, int y, int z){
    // ((A%C) × (B%C))%C
    int middle = x%z;
    int middle2 = y%z;
    int middle3 = middle * middle2;
    int result = middle3 % z;
    return result;
}

int main(){
    cin >> a >> b >> c;
    cout << firstFunc(a, b, c) << endl;
    cout << secFunc(a, b, c) << endl;
    cout << thrdFunc(a, b, c) << endl;
    cout << fourthFunc(a, b, c) << endl;
    return 0;   
}