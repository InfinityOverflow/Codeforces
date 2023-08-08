#include<bits\stdc++.h>
typedef long long int ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
ll f(ll n,ll m)
{
    if(n<=0 || n>10000)
    return 1e5;

    if(n==m)
    return 0;
    
    if(m>n and m/n<=1)
    return 1 + min(f(n-1,m),f(n*2,m));
    else if(m>n)
    return 1+f(2*n,m);
    else if(m<n)
    return n-m;
}
int main()
{
    IOS;
    ll n;cin>>n;
    ll m;cin>>m;
    cout<<f(n,m);
}
