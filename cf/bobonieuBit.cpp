//http://codeforces.com/problemset/problem/1395/C

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
	int m,n;
	cin>>n>>m;
	int a[n],b[n];

	for (int i=0;i<n;++i)
	{
		cin>>a[i];
	}

	for (int j=0;j<m;++j)
	{
		cin>>b[j];
	}

	int c[n];int k,temp;
	for (int i=0;i<n;++i)
	{
		k = INT_MAX;
		for (int j=0;j<m;++j)
		{
			temp = a[i]&b[j];
			if (__builtin_popcount(temp)<k)
			{
				k = temp;
			}
		}
		c[i] =k;
	}

	int ans = 0;
	for (int i=0;i<n;++i)
	{
		ans = ans | c[i];
	}

	cout<<ans<<"\n";

	return 0;
}