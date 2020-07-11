#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll t,n,ans,tmp,x,y,cnt=0;
   cin>>t;
   cnt=1;
   ans=0;
   while(t--)
   {
       ans = 0;
       cin>>n;
       while(n--)
       {
           cin>>x;
           if(x>0)ans+=x;
       }
       cout<<"Case "<<cnt++<<": "<<ans<<endl;





   }
}
