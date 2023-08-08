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
        int n,k;cin>>n>>k;
        vector<int>nums;
        rep(i,0,n)
        {
            int r;cin>>r;
            nums.push_back(r);
        }
        sort(nums.begin(),nums.end());
        int ans=0;
        int j=-1;
        vector<int>temp;
        rep(i,0,n)
        {
            if(temp.empty() || temp.back()+k>=nums[i])
            {
                temp.push_back(nums[i]);
                ans=max(ans , (int) temp.size() );
            }
            else
            {
                if(j==-1 || temp[j]+k>=nums[i])
                {
                    j++;
                    temp[j]=nums[i];
                    // cout<<" 1 -- ";
                }
                else
                {
                    temp[0]=nums[i];
                    j=0;
                }
            }
            // for(auto i:temp)
            // cout<<i<<" ";
            // cout<<endl;
        }
        
        ans=n-ans;
        cout<<ans<<endl;
        // rep(i,0,n-1)
        // {
        //     if(nums[i]+k<nums[i+1])
        //     {
        //         ans=n-1-i;
        //         break;
        //     }
        // }
        // int temp=0;
        // reverse(nums.begin(),nums.end());
        // rep(i,0,n-1)
        // {
        //     if(nums[i]-k>nums[i+1])
        //     {
        //         temp=n-i-1;
        //         break;
        //     }
        // }
        // cout<<min(ans,temp)<<endl;
    }
}