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
    long long n,m;
    cin>>n;
    
    long long ans = 0,amt = n;
    
    ans+=(amt/100);
    amt-=((amt/100)*100);
    
    ans+=(amt/20);
    amt-=((amt/20)*20);
    
    ans+=(amt/10);
    amt-=((amt/10)*10);
    
    ans+=(amt/5);
    amt-=((amt/5)*5);
    
    ans+=amt;
    
    cout<<ans<<"\n";
    
    return 0;
}