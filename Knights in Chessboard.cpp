#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll t,n,ans,tmp,x,y,cnt=0;
   string s1,s2;
   cin>>t;
   cnt=1;
   while(t--)
   {
       cin>>x>>y;
       tmp  = x*y;
       ans = 0;
       if(x==1 || y==1)
        ans = max(x,y);
       else if ( x==2 || y==2)
       {
           n=max(x,y);
           ans=n;
          if(n%4==1 || n%4==3)ans++;
          else if(n%4==2)ans+=2;
       }
       else ans = (tmp-1)/2+1;
       cout<<"Case "<<cnt++<<": "<<ans<<endl;





   }
}
