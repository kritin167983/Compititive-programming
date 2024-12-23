#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int X = 0;
    cin >> t ;
    while(t){
        string a ;
        cin >> a;
        if (a == "++X" || a == "X++" ) ++X ;
        else  --X ;
        t--;
    }
    cout << X ;
}