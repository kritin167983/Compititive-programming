#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , i = 0;
    string s , p;
    cin >> n ;

    while(n--){
        if(i==0){cin >> s ; p = s ; i++ ;}
        else cin >> s;

        if( p != s) {
            i++ ;
            p = s ;
        }


    }
    cout << i ;
}