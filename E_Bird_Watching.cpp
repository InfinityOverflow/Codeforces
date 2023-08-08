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
    int n,m;
    cin>>n>>m;
    vector<tuple<int,int>>a,b;
    rep(i,0,n)
    {
        int e,r;
        cin>>e>>r;
        a.push_back(make_tuple(e,r));
    }
    rep(i,0,m)
    {
        int e,r;
        cin>>e>>r;
        b.push_back(make_tuple(e,r));
    }
    //int count=0;
    rep(i,0,m)
    {
        int count=0;
        rep(j,0,n)
        {
            if(get<0>(a[j])>get<1>(b[i]))
            continue;
            else
            {
                int f=max(get<0>(a[j]),get<0>(b[i]));
                int l=min(get<1>(a[j]),get<1>(b[i]));
                count+=(l-f+1);
            }
        }
        cout<<count<<endl;
    }
}