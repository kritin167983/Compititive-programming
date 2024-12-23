#include<bits/stdc++.h>
using namespace std ;

int main(){
    long int m ;
    cin >> m ;
    int ans =  m/100 + (m%100)/20 + ((m%100)%20)/10 + (((m%100)%20)%10)/5 + (((m%100)%20)%10)%5 ;
    cout << ans ;
}