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
        rep(i,0,n)
        {
            cin>>nums[i];
        }
        int sum=0;
        for(auto s:nums)
        {
            sum+=s;
        }
        if(sum%2)
        no
        else
        yes
    }
}