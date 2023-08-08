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
        vector<int>nums(n);
        int last=INT_MIN;
        int flag=0;
        rep(i,0,n)
        {
            cin>>nums[i];
            if(nums[i]<last)
            {
                //cout<<0<<endl;
                flag=1;
            }
            last=nums[i];
        }
        if(flag==1)
        {
            cout<<0<<endl;
            continue;
        }
        int mini=INT_MAX;
        rep(i,0,n-1)
        {
            mini=min(nums[i+1]-nums[i],mini);
        }
        int ans=mini/2 +1;
        cout<<ans<<endl;
    }
}