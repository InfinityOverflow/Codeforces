#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>a;
        rep(i,0,n)
        {
            ll x;
            cin>>x;
            a.push_back(x);
        }
        string p="";
        rep(i,0,n)
        {
            p+=(char)(a[i]%2);
        }
        string s=p;
        int c=0;
        rep(i,0,n-1)
        {
            if(p[i]==p[i+1])
            {
                c++;
                p=p.substr(0,i+1)+p.substr(i+1);
            }
        }
        cout<<c<<endl;
    }
}