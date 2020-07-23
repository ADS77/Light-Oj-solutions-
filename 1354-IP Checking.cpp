#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,a,b,c,x,y,z,n,m;
    cin>>t;

    int cnt =1,inc = 0,tmp =1;
    int A[4],B[4];
    string s1,s2;
    bool ck = true ;
    while(t--)
    {
        memset(A,0,sizeof(A));
        memset(B,0,sizeof(B));
        cin>>s1>>s2;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]=='.')
            {
                inc++;
                tmp =1;
            }
            else
            {
                A[inc] += (int)(A[i]-'0')*tmp;
                tmp*=10;
            }
        }
        inc = 0;
        tmp =1;
        for(int i=0;i<s2.length();i++)
        {
            if(s2[i]=='.')
            {
                inc++;
                tmp =1;
            }
            else
            {
                B[inc] += (int)(B[i]-'0')*tmp;
                tmp*=2;
            }
        }


        for(int i=0;i<4;i++)cout<<A[i]<<" "<<B[i]<<": ";




    }
}
