#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void printvec(vector<long long> &a)
{
    for (int i=0;i<a.size();++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int t;long long n,m;cin>>t;
    while(t--)
    {
        cin>>n;
        vector <long long> v(n+1,LLONG_MAX);
        vector<int> c = {1,5,10,20,100};
        
        v[0]=0;v[1]=1;v[5]=1;v[20]=1;v[100]=1;
        
        for (long long i=2;i<=n;++i)
        {

            m = LLONG_MAX;
            for (int j=0;j<5;++j)
            {
                if (i>=c[j])
                    m = min(m,(1+v[i-c[j]]));
            }
            v[i]=min(m,v[i]);
        }
        
        cout<<v[n]<<"\n";
        
    }
    return 0;
}