#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        double fact=1;
        rep(i,0,n)
        {
            fact*=(i+1);
        }
        ll ans = fmod((n*(n-1)*fact),(pow(10,9)+7));
        cout<<ans<<endl;
    }
}