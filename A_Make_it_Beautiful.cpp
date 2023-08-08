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
        int n;cin>>n;
        vector<int>a(n);
        for(auto &x:a)
        {
            cin>>x;
        }
        if(n==2)
        {
            if(a[0]==a[1])
            {
                no
                continue;
            }
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        yes
        for(auto x:a)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}