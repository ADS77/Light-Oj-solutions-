/*
Idea about this problem is to convert the given number into binary in reverse order i.e (8 -> 001). Then append a 0 into it (00010) .

Then reverse the order ( (01000)=8, that makes no harm the input value ).

Now call the function nextpermutation(begin, end) that gives the next lexicographical permutation (i.e 01000 -> 10000). 

Now convert the binary number into decimal (i.e 10000 -> 16) . 
*/
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
