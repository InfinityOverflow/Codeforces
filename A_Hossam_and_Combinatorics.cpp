//9:45
#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
   ll t;
   cin>>t; 
   while (t--)
   {
      ll n;
      cin>>n;
      vector<ll> a;
        rep(i,0,n)
        {
             ll x;
             cin>>x;
             a.push_back(x);
        }
        sort(a.begin(),a.end());
        ll l=a[a.size()-1];
        ll k=a[0];
        if(l==k)
        {
            cout<<n*(n-1)<<endl;
            continue;
        }
        ll c1=0,c2=0;
        rep(i,0,n)
        {
            if(a[i]==l)
            c1++;
            if(a[i]==k)
            c2++;
        }
        ll ans=c1*c2*2;
        cout<<ans<<endl;
   }
}