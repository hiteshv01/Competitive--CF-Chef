#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int n;cin>>n;
    
    vector<int>v(n+1,0);
    vector<int>dp(n+1,1);
    int k;
    int ma = 1;
    for (int i=1;i<=n;++i)
    {
        cin>>k;v[i]=k;
        if (i>=2)
        {
            if (v[i]>v[i-1])
            {
                dp[i]+=dp[i-1];
                ma = max(dp[i],ma);      
            }
        }
    }
    
    cout<<ma<<"\n";

    return 0;
}