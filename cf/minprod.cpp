#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);


	int t;long a,b,x,y,n;unsigned long long int prod1,prod2;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>x>>y>>n;
		if (a>=b)
		{
			if (a-x <=n)
			{
				a-=x;
				n-=x;
				b-=min(y,n);
				prod1 = a*b;
				cout<<prod1<<endl;
			}	
			else
			{
				long a1 = a-n;
				prod1 = a1*b;
				long b1 = b-min(n,(b-y));
				long a2 = a-min(n,(b-y));
				prod2 = a2*b1;
				cout<<min(prod1,prod2)<<endl;
			}
		}
		else
		{
			if (b-y <=n)
			{
				b-=y;
				n-=y;
				a-=min(x,n);
				prod1 = a*b;
				cout<<prod1<<endl;
			}	
			else
			{
				long b1 = b-n;
				prod1 = b1*a;
				long a1 = a-min(n,(a-x));
				long b2 = b-min(n,(a-x));
				prod2 = b2*a1;
				cout<<min(prod1,prod2)<<endl;
			}

		}

	}

	return 0;
}