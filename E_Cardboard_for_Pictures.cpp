#include<bits\stdc++.h>
typedef long long int ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,c;cin>>n>>c;
        double s2=0;
        ll sum=0;
        rep(i,0,n)
        {
            ll r;cin>>r;
            sum+=r;
            s2+=pow(r,2);
        }
        s2-=c;
    }
}