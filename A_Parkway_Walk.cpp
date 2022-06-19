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
        int n,m;
        cin>>n>>m;
        //int arr[n];
        int s=0;
        rep(i,0,n)
        {
            int r;
            cin>>r;
            s+=r;
        }
        if(s>m)
        cout<<s-m<<endl;
        else
        cout<<0<<endl;
    }
}