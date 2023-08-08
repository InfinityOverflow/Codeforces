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
        int n;cin>>n;
        int k; cin>>k;
        int target=n;
        int curr=0;
        int ans=0;
        for(int j=n;j>=0;j--)
        {
            curr=j;
            //cout<<k-2<<" "<<curr<<" "<<target<<endl;
            int temp=k-1;
            int flag=0;
            while(temp--)
            {
                int prev=target-curr;
                //cout<<prev<<endl;
                if(prev<0)
                {
                    //cout<<prev<<endl;
                    flag=1;
                    break;
                }
                target=curr;
                curr=prev;
            }
            target=n;
            if(flag)
            continue;
            else
            ans++;
        }
        cout<<ans<<endl;
    }
}