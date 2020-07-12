#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ios_base::sync_with_stdio(0);
   ll t,n,ans,tmp,x,y,cnt=0;
   vector<int >v;
   cin>>t;
   cnt=1;
   while(t--)
   {
       cin>>x;
       v.clear();
       tmp=0;
       while(x>=1)
       {
           v.push_back(x%2);
           x/=2;
       }
       v.push_back(0);
       reverse(v.begin(),v.end());
       next_permutation(v.begin(),v.end());
        n =v.size();
        for(int i=0;i<n;i++)
            if(v[i])
            tmp+=pow(2,(n-1-i));
       cout<<"Case "<<cnt++<<": "<<tmp<<endl;





   }
}
