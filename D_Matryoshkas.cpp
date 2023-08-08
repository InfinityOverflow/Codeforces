#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    IOS;
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        map<ll,ll> f;
        rep(i,0,n)
        {
            ll k;cin>>k;
            f[k]++;
        }
        // map<ll,ll>::iterator it=f.end();
        // ll ans=0,j=-1;
        // it--;
        // for(;it!=--f.begin();it--)
        // {

        //     if(j==-1)
        //     {
        //         ans=(*it).second;
        //     }
        //     else
        //     {
        //         if((*it).first==j-1)
        //         {
        //             ans=max(ans,(*it).second);
        //         }
        //         else
        //         {
        //             ans+=(*it).second;
        //         }
        //     }
        //     j=(*it).first;
        // }
        map<ll,ll>::reverse_iterator it=f.rbegin();
        ll ans=0,j=-1,i=0,u=0;
        for(;it!=f.rend();it++)
        {

            if(j==-1)
            {
                ans=(*it).second;
                i=ans;
            }
            else
            {
                if((*it).first==j-1)
                {
                    ll x=(*it).second;
                    if(x<=i)
                    {
                        i=x;
                    }
                    else
                    {
                        ans+=(x-i);
                        i=x;
                    }
                }
                else
                {
                    ans+=(*it).second;
                    i=(*it).second;
                }
            }
            j=(*it).first;
        }
        cout<<ans<<endl;
    }
    
}