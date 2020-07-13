/*
 n! means successive multiplication on n numbers from 1-n  i.e n!= 1*2*3*4……..*n
We know,
log(a*b) = log(a) + log(b)

Therefore
log( n! ) = log(1*2*3....... * n) 
          = log(1) + log(2) + ........ +log(n)

Now, observe that the floor value of log base 
10 increased by 1, of any number, gives the
number of digits present in that number.

Hence, output would be : floor(log(n!)) + 1.
However that solution would not be able to handle cases where n >10^6
Kamenetsky's formula is the solution 
f(n) = log10((n/e)^n√(2πn))
f(n) = nlog10(n/e) + log10(2πn)/2
log(n)/log(base) gives the value of log(n) in particular base
*/
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
