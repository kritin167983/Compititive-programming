#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
 cin >> t;
 int a[t],b[t],c[t];
 int ans=0;
 for(int i=0;i<t;i++)
   {  cin >> a[i] >> b[i] >> c[i];
      int p=0;
      p=a[i]+b[i]+c[i];
      if(p>1)
        {ans++;}
   }
cout << ans ;
return 1;
}

