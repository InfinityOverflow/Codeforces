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
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a;
        vector<ll>b;
        rep(i,0,n)
        {
            ll r;
            cin>>r;
            a.push_back(r);

        }
        rep(i,0,n)
        {
            ll r;
            cin>>r;
            b.push_back(r);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int d=a[n-1]-b[n-1];
        if(d<0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int f=0;
        rep(i,0,n)
        {
            if(b[i]>a[i])
            {
                f=1;
                break;
            }
            else if(d!=a[i]-b[i])
            {
                if(b[i])
                {
                    f=1;
                    break;
                }
                else if(d<a[i]-b[i] )
                {
                    f=1;
                    break;
                }

            }
        }
        if(f)
        {
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
}