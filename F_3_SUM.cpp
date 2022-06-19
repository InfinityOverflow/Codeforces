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
        int n;
        cin>>n;
        int a[n],b[n];
        rep(i,0,n)
        {
            int r;
            cin>>r;
            a[i]=(r%10);
            
        }
        sort(a,a+n);
        rep(i,0,n)
        {
            if(i)
            {
                b[i]=b[i-1]+a[i];
            }
            else
            b[i]=a[i];
        }
        rep(i,0,n)
        {
            
        }
    }
}