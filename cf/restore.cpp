#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t;cin>>t;
	int x,y,n;
	while(t--)
	{
		cin>>n>>x>>y;
		if (n==2) cout<<x<<" "<<y<<endl;
		else if (n>2 && (y-x)%(n-1)==0)
		{
			int df = (y-x)/(n-1);
			for (int i=x;i<=y;i+=df)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}
		else 
		{
			int k = ceil(float((y-x))/(n-1));
			//int k1 = ceil(k);
			int diff = k*(n-1);
			//diff -= (y-x);

			int l = y-x;

			int xopy = x;
			int yopy = y;
			while(xopy>0)
			{
				xopy-=min(k,xopy);
			}

			while((yopy-xopy)<diff)
			{
				yopy+=k	;
			}

			
			//yopy+=diff;

			for (int i=xopy;i<=yopy;i+=k)
			{
				cout<<i<<" ";
			}
			cout<<endl;		 
		}
	}

	return 0;
}