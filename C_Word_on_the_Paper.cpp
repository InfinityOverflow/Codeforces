#include<bits\stdc++.h>
typedef long long int ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    IOS
    int t;cin>>t;
    while(t--)
    {
        string ip;
        int i=0; int idx=-1;
        string ans="";
        while(i<8)
        {
            cin>>ip;
            if(idx!=-1)
            {
                if(ip[idx]!='.')
                ans.push_back(ip[idx]);
                i++;
                continue;
            }
            for(int j=0;j<ip.length();j++)
            {
                if(ip[j]!='.')
                {
                    idx=j;
                    ans.push_back(ip[j]);
                    break;
                }
            }
            i++;
        }
        cout<<ans<<endl;
    }
}