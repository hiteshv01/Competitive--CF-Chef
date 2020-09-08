#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;long a,b;
    cin>>t;double k;
    while(t--)
    {
        cin>>a>>b;
        long diff = abs(a-b);
        long ans = diff/10;
        long rem = diff - ans*10;
        if (rem) ans+=1;
        cout<<ans<<endl;

    }
    
    return 0;
}