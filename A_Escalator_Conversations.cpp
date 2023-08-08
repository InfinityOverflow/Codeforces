#include<bits\stdc++.h>
typedef long long int ll ;
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
        int n,m,k,h;cin>>n>>m>>k>>h;
        vector<int>heights(n);
        rep(i,0,n)
        {
            cin>>heights[i];
        }
        int maxDiff=(m-1)*k;
        int count=0;
        unordered_map<int,int>umap;
        rep(i,0,n)
        {
            int diff=heights[i]-h;
            if(diff<=maxDiff and diff>=-1*maxDiff and diff!=0 and diff%k==0 and diff/k!=0)
            {
                if(diff<0)
                diff=-1*diff;
                
                umap[diff/k]++;
            }
        }
        for(auto it:umap)
        {
            count+=min(max(m-it.first,0),it.second);
        }
        //count=min(m,(int)umap.size());
        cout<<count<<endl;
    }
}