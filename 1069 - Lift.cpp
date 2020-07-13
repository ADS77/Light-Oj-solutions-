#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll  t,x,b,a,c,cnt=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(b>a)c=b*4+19;
        else c=a*4+19+(a-b)*4;
        cout<<"Case "<<++cnt<<": "<<c<<endl;

    }
}
