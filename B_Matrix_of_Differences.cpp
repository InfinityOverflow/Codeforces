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
        int a[n*n];
        int i=1;
        int j=n*n;
        rep(k,0,n*n)
        {
            a[k]=j;
            k++;j--;
            a[k]=i;
            i++;
        }
        int ans[n][n];
        i=0;
        j=0;
        rep(k,0,n)
        {
            rep(l,0,n)
            {
                ans[k][l]=a[i];
                i++;
            }
            k++;
            for(int l=n-1;l>=0;l--)
            {
                ans[k][l]=a[i];
                i++;
            }
        }
        rep(k,0,n)
        {
            rep(l,0,n)
            {
                cout<<ans[k][l]<<" ";
            }
            cout<<endl;
        }
        //cout<<endl;
    }
}