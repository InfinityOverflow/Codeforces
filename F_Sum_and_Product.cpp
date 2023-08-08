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
        int n;cin>>n;
        map<pair<ll,ll>,ll>umap;
        vector<ll>nums(n);
        rep(i,0,n)
        {
            cin>>nums[i];
            //umap[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                umap[{nums[i]+nums[j],nums[i]*nums[j]}]++;
            }
        }
        //sort(nums.begin(),nums.end());//nlogn
        int q;cin>>q;
        while(q--)
        {
            ll x,y;cin>>x>>y;
            int i=0;
            int j=n-1;
            int count=0;
            count+=umap[{x,y}];
            cout<<count<<" ";
        }
        cout<<endl;
    }
}