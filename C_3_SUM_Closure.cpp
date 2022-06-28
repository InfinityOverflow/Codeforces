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
        int n;cin>>n;
        vector<int>a(n),b(n);
        rep(i,0,n)
        {
            cin>>a[i];
        }
        int k=0;
        rep(i,0,n)
        {
            if(!k)
            {
                b[0]=a[0];
                k++;
            }
            else
            {
                b[i]=a[i]+b[i-1];
            }
        }
        
    }
}