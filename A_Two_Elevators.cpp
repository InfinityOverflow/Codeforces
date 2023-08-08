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
        int a,b,c;
        cin>>a >>b>>c;
        int s=c-b;
        int d=a-1;
        if(s<0)
        s*=-1;
        if(d<0)
        d*=-1;
        s+=(c-1);
         if(s<0)
        s*=-1;
        if(s<d)
        cout<<2<<endl;
        else if(d<s)
        cout<<1<<endl;
        else
        cout<<3<<endl;
    }
}