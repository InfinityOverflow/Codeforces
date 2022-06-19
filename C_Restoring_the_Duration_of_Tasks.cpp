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
        vector<int>a(n);
       // vector<int>b(n);
        //vector<int>c(n);
        rep(i,0,n)
        {
            int r;
            cin>>r;
            a[i]=r;
        }
        rep(i,0,n)
        {
            int r,d,l;
            cin>>r;
            if(!i)
            {
                d=r-a[i];
                l=r;
            }
            else
            {
               // cout<<a[i]<<" "<<max(b[i-1],a[i])<<endl;
                d=r-max(l,a[i]);
                l=r;
            }
            cout<<d<<" ";
        }
        cout<<endl;
    }
}