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
        int n; cin>>n;
        int a[n];
        rep(i,0,n)
        {
            cin>>a[i];
        }
        
        rep(i,0,n)
        {
            int x=0;
            rep(j,0,n)
            {
                if(i!=j)
                {
                    x=x^a[j];
                }
            }
            if(x==a[i])
            {
                cout<<a[i]<<endl;
                break;
            }
        }
    }
}