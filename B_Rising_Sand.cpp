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
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        rep(i,0,n)
        {
            cin>>a[i];
        }
        // for(auto x:a)
        // {
        //     cout<<x;
        // }
        int c=0;
        rep(i,1,n-1)
        {
            if(a[i]>a[i-1]+a[i+1])
            c++;
        }
        if(c==max(n-2-(n-2)/2,(n-2)/2) || k==1)
        {
            c=max(n-2-(n-2)/2,(n-2)/2); 
            cout<<c<<endl;
            continue;
        }
       
            cout<<c<<endl;
            continue;
        
    }
}