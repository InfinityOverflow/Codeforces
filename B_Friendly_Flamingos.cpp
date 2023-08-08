#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    ll n,k,c=0,z;
    cin>>n>>k;
    ll i;
    z=k*k;
    for(i=1;i<=n;i++)
    {
        if(!(i%k) and (i%z))
        {
            c++;
        }
    }
    cout<<c;
}