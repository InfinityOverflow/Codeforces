#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    IOS
    int t; cin>>t;
    while(t--)
    {
        vector<ll>a(4);
        for(auto &x:a)
        {
            cin>>x;
        }
        ll x=0,y=0;
        ll c=0;
            x+=a[0];
            y+=a[0];
            c+=a[0];
            if(x==0)
            {
                cout<<1<<endl;
                continue;
            }
            ll j=min(a[1],a[2]);
            c+=2*j;
            a[1]-=j;
            a[2]-=j;
            if(x>=a[1]+a[2]+a[3])
            {
                c+=a[1]+a[2]+a[3];
            }
            else
            c+=x+1;
            cout<<c<<endl;
    }
}