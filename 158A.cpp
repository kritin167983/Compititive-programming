#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int n,k ;
    cin >> n >> k ;
    int a  ;
    int i = 0 ;
    while(k){
        cin >> a ;
        if (a == 0) {i--; k = 1 ;}
        i++ ;
        k--;
        n--;

    }
    int b = a;
    cin >> a;
    while (b==a && a!= 0 && n!=0){
       n--;
       i++ ;
       cin >> a;
    }
    cout << i ;
}