#include <iostream>
#include <utility>
#include <string>
#include <vector>

using namespace std;



int main()
{
    string s;
    
    cin>>s;
    
    vector<int> qind;
    vector<pair<int,int>> a;
    int qcnt = 0;
    //int acnt =0;
    for (int i=s.length()-1;i>=0;--i)
    {
        if (s[i]=='A')
        {
            a.push_back(make_pair(i,qcnt));
        }
        else if (s[i]=='Q')
        {
            ++qcnt;
            qind.push_back(i);
        }
    }

    //cout<<a[0].first<<" "<<a[0].second<<"\n";
    //cout<<qind[0]<<"\n";

    int ans = 0;
    for (int i=0;i<qind.size();++i)
    {
        for (int j=0;j<a.size();++j)
        {
            if (qind[i]<a[j].first)
            {
                ans+=a[j].second;
            }
            
        }
    }
    
    cout<<ans<<endl;
    
    
    
    return 0;
}