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
        vector<int>a(n);
        for(auto &x:a)
        {
            cin>>x;
        }
        sort(a.begin(),a.end());
        int c=0,i=0,d=0;
        while(a[i]<=1)
        {
            if(a[i]==1)
            {
                c++;
            }
            i++;
        }
        int ans=n-(int)c/2;
        cout<<ans<<endl;
    }
}