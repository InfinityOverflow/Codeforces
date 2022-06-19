#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(ll i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    IOS;
    ll n,q;
    cin>>n>>q;
    ll a[n],b[n];
    rep(i,0,n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    rep(i,0,n)
    {
        if(i==0)
        {
            b[i]=a[i];
        }
        else
         b[i]=b[i-1]+a[i];
    }
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        ll s=0;
        if(n!=x)
        s=b[n-x+y-1]-b[n-x-1];
        else
        s=b[n-x+y-1];
        cout<<s<<endl;
    }
}