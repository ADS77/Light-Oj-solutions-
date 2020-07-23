#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
lld dist(lld x1,lld y1,lld x2,lld y2)
{
    return sqrt(((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2)));
}
int main()
{
    ll t,a,b,c,x,y,z,n,m;
    cin>>t;
    lld ox,oy,ax,ay,bx,by,oa,ob,ab,thita;
    int cnt =1;
    while(t--)
    {
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        oa = dist(ox,oy,ax,ay);

        ob = dist(ox,oy,bx,by);
        ab = dist(ax,ay,bx,by);
        thita  = acos((oa*oa + ob*ob - ab * ab)/(2*oa*ob));

        cout<<"Case "<<cnt++<<": "<<std::fixed<<std::setprecision(9)<<oa*thita<<endl;

    }
}
