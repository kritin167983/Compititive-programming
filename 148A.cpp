#include<bits/stdc++.h>
#include<numeric>
using namespace std ;


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; 
}
int lcm_of_three(int a, int b, int c) {
    return lcm(lcm(a, b), c); 
}
int lcm_of_four(int a, int b, int c, int d) {
    return lcm(lcm(lcm(a, b), c), d); 
}
int main(){
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d ;
    int ans = d/k  + d/l + d/m + d/n - d / lcm(k , l) - d/lcm(k,m) - d/lcm(k,n) - d/lcm(l,m) - d/lcm(l,n) - d/lcm(m,n) + d/lcm_of_three(k,m,n) + d/lcm_of_three(k,m,l) + d/lcm_of_three(k,n,l) +  d/lcm_of_three(l,n,m) - d/lcm_of_four(k,m,l,n);
    cout << ans ;
}