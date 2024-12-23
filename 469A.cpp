#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n , p , q , x;
    cin >> n ;
    int arr[n+1] ;
    for(int i =0 ; i<n+1 ; i++) arr[i] = 0;
    cin >> p ;
    for(int i =0 ; i<p ; i++) {cin >> x ; arr[x] = 1 ;}
    cin >> q;
    for(int i =0 ; i<q ; i++) {cin >> x ; arr[x] = 1 ;}
    for(int i =1 ; i<n+1 ; i++){
        if (arr[i] == 0){  x = n + 2 ;}
    }
    if(x == n+2 ){
        cout << "Oh, my keyboard!" ;
    }
    else cout << "I become the guy." ; 
    

}