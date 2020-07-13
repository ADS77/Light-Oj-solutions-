 #include <bits/stdc++.h>
using namespace std;
//#define long long ll
double log(double x,double  b)
{
    return (log(x)/log(b));
}
long long  findDigits(long long  n,long long  b)
{
	if (n < 0)
		return 0;
	if (n <= 1)
		return 1;

	double x = ((n * log(n / M_E,b) +log(2 * M_PI * n,b) / 2.0));

	return floor(x) + 1;
}

// Driver Code
int main()
{

	long long  t,x,b,cnt=0;
	cin>>t;
	while(t--)
    {
        cin>>x>>b;
        cout<<"Case "<<++cnt<<": "<<findDigits(x,b)<<endl;;
    }
}
