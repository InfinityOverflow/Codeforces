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
    while (t--)
    {
        ll n;
        cin>>n;
        vector<int> a(n);
        for(auto &x:a)
        {
            cin>>x;
        }
        sort(a.begin(),a.end());
        ll ans=0;
        vector<int>v(n,0);
        ll c=0;
        rep(i,0,n)
        {
            if(i>=a[i])
            v[i]=1;
        }
        rep(i,0,n)
        {
            if(v[i]==1 and (v[i-1]==0 || i==0))
            {
                ans++;
            }
        }
        if(a[0]!=0)
        ans++;
        cout<<ans<<endl;
    }

}