#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll  t,x,b,a,c,cnt=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((a*a==b*b+c*c) || (b*b==c*c+a*a) || (c*c==a*a+b*b))
        cout<<"Case "<<++cnt<<": "<<"yes"<<endl;
        else  cout<<"Case "<<++cnt<<": "<<"no"<<endl;
    }
}
