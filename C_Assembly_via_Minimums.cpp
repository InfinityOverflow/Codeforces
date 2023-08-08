#include<bits\stdc++.h>
typedef long long int ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>nums((n*(n-1))/2);
        unordered_map<int,int>umap,freq;
        rep(i,0,(n*(n-1))/2)
        {
            cin>>nums[i];
            if(umap.find(nums[i])!=umap.end())
            umap[nums[i]]++;
            else
            umap[nums[i]];

        }
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int idx=0;
        int i=0;
        ans.push_back(nums[i++]);
        freq[ans.back()]++;
        while(i<(n*(n-1))/2)
        {
            if(ans.back()==nums[i])
            i++;
            else
            {
                ans.push_back(nums[i++]);
                freq[ans.back()]++;
            }
        }
        //ans[idx]=ans[idx-1]+1;
        idx=ans.size();
        while (idx<n)
        {
            ans.push_back(ans.back());
            idx++;
        }
        rep(i,0,n-1)
        {
            umap[ans[i]]-=(n-i-1)-1;
            if(umap[ans[i]]>0)
            {
                ans[i+1]=ans[i];
            }
        }
        for(auto itr:ans)
        cout<<itr<<" ";
        cout<<endl;
    }
}