#include<bits/stdc++.h>
using namespace std;

int main(){
    int  m,n,a;
    for (int i = 1 ; i < 6 ; i++){
        for (int j=1; j < 6 ; j++) {
            cin >> a ;
            if(a==1) { m = i; n = j;}
        }
    }
    int ans = abs(m-3) + abs(n-3) ;
    cout << ans ;
}

